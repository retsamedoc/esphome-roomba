#pragma once

#include "esphome/core/component.h"


namespace esphome::roomba {

   // Roomba Open Sensor Commands (and bytes returned)
   //
   enum class Command : uint8_t {
      Start             = 128,
      Reset             = 7,
      Stop              = 173,
      Baud              = 129,   //  1 byte: [baud]
      Safe              = 131,
      Full              = 132,
      Power             = 133,
      Clean             = 135,
      MaxClean          = 136,
      Spot              = 134,
      SeekDock          = 143,
      Power             = 133,
      Schedule          = 167,   // 15 bytes: [Days] [Sun Hour] [Sun Minute] [Mon Hour] [Mon Minute] [Tue Hour] [Tue Minute] [Wed Hour] [Wed Minute] [Thu Hour] [Thu Minute] [Fri Hour] [Fri Minute] [Sat Hour] [Sat Minute]
      SetDayTime        = 168,   //  3 bytes: [Day] [Hour] [Minute]
      Drive             = 137,   //  4 bytes: [Velocity high byte] [Velocity low byte] [Radius high byte] [Radius low byte]
      DriveDirect       = 145,   //  4 bytes: [Right velocity high byte] [Right velocity low byte] [Left velocity high byte] [Left velocity low byte]
      DrivePWM          = 146,   //  4 bytes: [Right PWM high byte] [Right PWM low byte] [Left PWM high byte] [Left PWM low byte]
      Motors            = 138,   //  1 byte:  [Motors]
      PWMMotors         = 144,   //  3 bytes:  [Main Brush PWM] [Side Brush PWM] [Vacumm PWM]
      LEDs              = 139,   //  3 bytes: [LED bits] [Power Color] [Power Intensity]
      SchedulingLEDs    = 162,   //  2 bytes:  [Weekday LED Bits][Scheduling LED Bits]
      Buttons           = 165,   //  1 byte:  [Buttons]
      LEDsASCII         = 164,   //  4 bytes: [Digit 3 ASCII] [Digit 2 ASCII] [Digit 1 ASCII] [Digit 0 ASCII]
      Song              = 140,   // 2n+2 bytes
      Play              = 141,   //  1 byte: [Song Number]
      Sensors           = 142,   // [Packet ID]
      QueryList         = 149,   // [Number of Packets][Packet ID 1][Packet ID 2]...[Packet ID N] 
      Stream            = 148,   // [Number of packets] [Packet ID 1] [Packet ID 2] [Packet ID 3] 
      PauseResumeStream = 150,
   };


   // Roomba Open Interface Sensor Packets
   //
   enum class Sensor : uint8_t {
      Group0            			= 0,  // Sensors  7 - 26
		Group1      					= 1,  // Sensors  7 - 16
		Group2       					= 2,  // Sensors 17 - 20
		Group3       					= 3,  // Sensors 21 - 26 
		Group4        				   = 4,  // Sensors 27 - 34
		Group5       					= 5,  // Sensors 35 - 42
		Group6         				= 6,  // Sensors  7 - 42
		BumpsAndWheelDrops	      = 7, 
		Wall						      = 8,  
		CliffLeft				      = 9,  
		CliffFrontLeft			      = 10, 
		CliffFrontRight		      = 11, 
		CliffRight				      = 12, 
		VirtualWall				      = 13, 
		WheelOvercurrents			   = 14, 
		DirtDetect  			      = 15, 
		Unused					      = 16, 
		IRByte					      = 17, 
      IRCharLeft                 = 52, 
      IRCharRight                = 53,
		Buttons					      = 18,
		Distance					      = 19, 
		Angle						      = 20, 
		ChargingState				   = 21, 
		Voltage					      = 22, 
		Current					      = 23, 
		BatteryTemperature		   = 24, 
		BatteryCharge				   = 25, 
		BatteryCapacity			   = 26, 
		WallSignal				      = 27, 
		CliffLeftSignal			   = 28, 
		CliffFrontLeftSignal		   = 29, 
		CliffFrontRightSignal		= 30, 
		CliffRightSignal			   = 31, 
		UserDigitalInputs			   = 32, 
		UserAnalogInput			   = 33, 
		ChargingSourcesAvailable   = 34, 
		OIMode					      = 35, 
		SongNumber				      = 36, 
		SongPlaying				      = 37, 
		NumberOfStreamPackets		= 38, 
		Velocity					      = 39, 
      Radius					      = 40,
		RightVelocity				   = 41,
		LeftVelocity				   = 42,
      LeftEncoderCounts          = 43,
      RightEncoderCounts         = 44,
      LightBumber                = 45,
      LightBumperLeft            = 46,
      LightBumperFrontLeft       = 47,
      LightBumberCenterLeft      = 48,
      LightBumberCenterRight     = 49,
      LightBumperFrontRight      = 50,
      LightBumperRight           = 51,
		LeftMotorCurrent			   = 54,
		RightMotorCurrent			   = 55,
      MainBrushCurrent           = 56,
      SideBrushCurrent           = 57,
      Stasis                     = 58,
	};

   enum class ChargeState : uint8_t {
	   NotCharging		= 0,
		Reconditioning = 1,
		Full	         = 2,
		Trickle        = 3,
		Waiting			= 4,
		Fault				= 5,
	};

   enum class OIMode : uint8_t {
      Off      = 0,
      Passive  = 1,
      Safe     = 2,
      Full     = 3,
   };      
            
} // namespace esphome::roomba
