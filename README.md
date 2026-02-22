<a href="https://esphome.io/">
  <picture>
    <source media="(prefers-color-scheme: dark)" srcset="./logo-text-on-dark.svg", alt="ESPHome Logo">
    <img src="./logo-text-on-light.svg" alt="ESPHome Logo">
  </picture>
</a>
+
  <picture>
    <img src="./iRobot_logo.png" alt="iRobot">
  </picture>


# ESPHome Roomba Component
An ([external](https://esphome.io/components/external_components)) components for [ESPHome](https://esphome.io) that supports upgrading iRobot&reg; devices that follow the iRobot&reg; Create&reg; 2 Interface (OI) Specification.

(This is a refactor of the original custom_component flavor developed by the community.)

# Features
- Ability to wake the iRobot® up from normal & deep sleep
- Ability to command the iRobot® to start normal/spot/max cleaning/stop cleaning and go back to the dock
- Get a detailed charging status from the iRobot
- Ability to guess the iRobot®'s status (the [`Roomba® Open Interface (OI)`](./docs/iRobot%20Roomba%20600%20Open%20Interface%20Spec.pdf) doesn't report cleaning status)
- Ability to report more advanced sensors (Battery temperature & voltage, General power usage, Motor currents, the value of the Virtual Wall sensor and which button is being pressed)
- Ability to restart and power off the `iRobot®`
- Can be hooked into Home Assistant’s `Template Vacuum` configuration
- Ability to set the iRobot®'s clock

# Software Requirements
- Home Assistant
- ESPHome (2025.11.0 or later)

# Hardware Requirements
- Compatible iRobot® Roomba®
- A WiFi network
- ESP32-C3 Super Mini
- Buck Converter (set it to `3.3v`)
- `2N3906` PNP Transistor

# Tested iRobot® Roomba®'s
- 600 series
- 700 series
- 800 series

# Connection Diagram
![Connection Diagram](./connection-diagram.png)

# Credits
[mannkind](https://github.com/mannkind) - [Original implementation](https://github.com/mannkind/ESPHomeRoombaComponent)

[davidecavestro](https://github.com/davidecavestro) - [Native API support and a major rewrite](https://github.com/davidecavestro/ESPHomeRoombaComponent)

[wburgers](https://github.com/wburgers) - [Native UART support](https://github.com/wburgers/ESPHomeRoombaComponent)

[philpownall](https://github.com/philpownall) - [Manual controls, text display and dashboard config](https://github.com/philpownall/ESPHomeRoomba)

[shonp40](https://github.com/ShonP40) - [Combined and final custom_components version](https://github.com/ShonP40/ESPRoomba)
