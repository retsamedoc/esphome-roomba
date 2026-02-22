#include "roomba.h"
#include "definitions.h"
#include "esphome/core/application.h"
#include "esphome/core/helpers.h"
#include "esphome/core/log.h"

namespace esphome::roomba {

static const char *const TAG = "roomba";

   // Code here should perform all component initialization, whether hardware, memory, or otherwise
   void Roomba::setup() {
      if (this->brc_pin_ != nullptr) {
         this->brc_pin_->setup();
         ESP_LOGI(TAG, "GPIO pin is %d", this->led_pin_);
      }

      GPIOPin *brc_pin_{nullptr};\
   }

   // Tasks here will be performed at every call of the main application loop.
   void Roomba::loop() {
   }

   // Polling Component Updates
   void Roomba::update() {
   }

   // called as-needed to "dump" the device's current configuration. 
   void Roomba::dump_config() {
      ESP_LOGCONFIG(TAG, "iRobot Roomba Open Interface");
      if (this->brc_pin_ != nullptr) {
         ESP_LOGI(TAG, "BRC pin is %d", this->brc_pin_);
      }
   }


} // namespace esphome::roomba
