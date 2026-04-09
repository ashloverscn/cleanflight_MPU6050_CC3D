/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * This file is part of Cleanflight.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "CC3D"

#define LED0_PIN                PB3
#define INVERTER_PIN_UART1      PB2 

#define BEEPER                  PA15
#define BEEPER_OPT              PA2

#define USE_EXTI
#define MPU_INT_EXTI            PA3
#define USE_MPU_DATA_READY_SIGNAL

// --- SPI Config (Maintained for Onboard Flash) ---
#define USE_SPI
#define USE_SPI_DEVICE_2
#define M25P16_CS_GPIO          GPIOB
#define M25P16_CS_PIN           PB12
#define M25P16_SPI_INSTANCE     SPI2

#define USE_FLASHFS
#define USE_FLASH_M25P16

// --- I2C Config (Moved to I2C1 to avoid UART3 conflict) ---
#define USE_I2C
#define USE_I2C_DEVICE_1      
#define I2C_DEVICE (I2CDEV_1) 
#define I2C1_SCL PB6
#define I2C1_SDA PB7

// --- IMU Config (MPU6050 via I2C) ---
#define USE_GYRO
#define USE_GYRO_MPU6050
#define GYRO_MPU6050_ALIGN      CW90_DEG
#define GYRO_MPU6050_I2C_ADDR   0x68

#define USE_ACC
#define USE_ACC_MPU6050
#define ACC_MPU6050_ALIGN       CW90_DEG

// --- Serial & IO ---
#define USE_VCP
#define USE_UART1
#define USE_UART3             
#define USE_SOFTSERIAL1
#define USE_SOFTSERIAL2

#define SERIAL_PORT_COUNT       5

#ifndef CC3D_OPBL
#define SOFTSERIAL1_TX_PIN      PB5 
#define SOFTSERIAL1_RX_PIN      PB0 
#endif

// UART3 and I2C1 are now on separate pins
#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define USE_ADC
#define CURRENT_METER_ADC_PIN   PB1
#define VBAT_ADC_PIN            PA0
#define RSSI_ADC_PIN            PB0

#define USE_SERIAL_4WAY_BLHELI_INTERFACE
#undef USE_MAG

#define DEFAULT_RX_FEATURE      FEATURE_RX_PPM

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         ( BIT(14) )

#define USABLE_TIMER_CHANNEL_COUNT 12
#define USED_TIMERS             ( TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4) )