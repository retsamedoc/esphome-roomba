
from esphome import pins

import esphome.codegen as cg
from esphome.components import binary_sensor, text_sensor, sensor, uart
import esphome.config_validation as cv
from esphome.const import CONF_BRC_PIN, CONF_ID
from esphome.cpp_helpers import gpio_pin_expression
import esphome.final_validate as fv

DEPENDENCIES = ["uart"]

roomba_ns = cg.esphome_ns.namespace("roomba")
Roomba = roomba_ns.class_("Roomba", cg.Component, uart.UARTDevice)
MULTI_CONF = True


CONFIG_SCHEMA = cv.Schema(
    {
        cv.GenerateID(): cv.declare_id(Roomba),
        cv.Optional(CONF_BRC_PIN): pins.gpio_output_pin_schema,
    }
)


async def to_code(config):
    cg.add_global(roomba_ns.using)
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)

    await uart.register_uart_device(var, config)

    cg.add(var.set_role(config[CONF_ROLE]))
    if CONF_BRC_PIN in config:
        brc_pin = await gpio_pin_expression(config[CONF_BRC_PIN])
        cg.add(var.set_brc_pin(brc_pin))


