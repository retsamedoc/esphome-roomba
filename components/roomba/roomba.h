#pragma once

#include "esphome/core/component.h"
#include "esphome/core/automation.h"

#include "esphome/components/uart/uart.h"
#include "esphome/components/sensor/sensor.h"
#include "esphome/components/switch/switch.h"

namespace esphome::roomba {

using namespace esphome::uart;


   class Roomba : public UARTDevice, public Component {
   	public:
      Roomba() = default;

      void setup() override;
      void loop() override;
      void update() override;
      void dump_config() override;

   protected:
      GPIOPin *baud_rate_control_pin_{nullptr};

	private:

}; // Class roomba

} // namespace esphome::roomba
