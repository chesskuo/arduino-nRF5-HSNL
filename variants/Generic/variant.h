/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_GENERIC_
#define _VARIANT_GENERIC_

/** Master clock frequency */
#ifdef NRF52
#define VARIANT_MCK       (64000000ul)
#else
#define VARIANT_MCK       (16000000ul)
#endif

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (32u)
#define NUM_DIGITAL_PINS     (32u)
#define NUM_ANALOG_INPUTS    (6u)
#define NUM_ANALOG_OUTPUTS   (0u)

// LEDs
//#define PIN_LED              (13)
//#define LED_BUILTIN          PIN_LED

/*
 * Analog pins
 */
#define PIN_A0               (31)  //p0.31 for Battery/2, for GAT4485
//#define PIN_A1               (29)  //this setting is for weatherBit
//#define PIN_A2               (3)
//#define PIN_A3               (4)
//#define PIN_A4               (5)
//#define PIN_A5               (6)

static const uint8_t A0  = PIN_A0 ;
//static const uint8_t A1  = PIN_A1 ;
//static const uint8_t A2  = PIN_A2 ;
//static const uint8_t A3  = PIN_A3 ;
//static const uint8_t A4  = PIN_A4 ;
//static const uint8_t A5  = PIN_A5 ;
#ifdef NRF52
#define ADC_RESOLUTION    14
#else
#define ADC_RESOLUTION    10
#endif

/*
 * Serial interfaces
 */
// Serial
// for 4553 V1, 4485 V1.X, 4038, 水閥控制器, 2485 V1.0, V1.2, V1.3; 4485 V1.2, V1.3, 2485 V1.0(20210410 and later)
//#define PIN_SERIAL_RX       (6)
//#define PIN_SERIAL_TX       (8)

// for DK52, 2553, ---
// 4553 V2.0~V2.2, 4038 V2, 4485 V2, 2038 V2.0~V2.1, 52840
// SIN-020-V1.0, SIN-021
#define PIN_SERIAL_RX       (8)
#define PIN_SERIAL_TX       (6)

/*
 * SPI Interfaces, for NB4485 or LORA2485
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (5)
#define PIN_SPI_MOSI         (3)
#define PIN_SPI_SCK          (4)

static const uint8_t SS   = 2 ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

// for RTC, 2038 V2.1
//#define PIN_WIRE_SDA         (12u)  //(19u)
//#define PIN_WIRE_SCL         (11u)  //(18u)

// for GAT product LIS3DH, 2485, 4485 model, 2038
//#define PIN_WIRE_SDA         (19u)
//#define PIN_WIRE_SCL         (18u)

// next two for 4553 -- 4553 V2.0~2.2
#define PIN_WIRE_SDA         (12u)
#define PIN_WIRE_SCL         (11u)

// next two for 52840
//#define PIN_WIRE_SDA         (27)  //(26u)
//#define PIN_WIRE_SCL         (26)  //(27u)
//#define PIN_WIRE_SDA         (26u)  //(26u)
//#define PIN_WIRE_SCL         (27u)  //(27u)

// next don't know for which model
//#define PIN_WIRE_SDA         (20u)
//#define PIN_WIRE_SCL         (17u)

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

/*
 * Reset Button at P0.21
 */
#define RESET_PIN            (21)

// next for 52840
//#define RESET_PIN            (18)

#ifdef __cplusplus
}
#endif

#endif
