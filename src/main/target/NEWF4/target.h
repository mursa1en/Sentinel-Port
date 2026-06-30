#pragma once

#define TARGET_BOARD_IDENTIFIER "ST41"
#define USBD_PRODUCT_STRING  "STM32F411CE"


// --- LED Configuration ---
#define LED0                    PC13


// *************** SPI1 Gyro & ACC **********************
#define USE_SPI
#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define USE_IMU_MPU6500
#define MPU6500_SPI_BUS         BUS_SPI2
#define MPU6500_CS_PIN          PB12
#define IMU_MPU6500_ALIGN       CW0_DEG

// *************** SPI Barometer (BMP280) **********************
#define USE_BARO_BMP280
#define USE_BARO_SPI_BMP280
#define BMP280_SPI_BUS          BUS_SPI2
// --- FIX: Moved BMP280 CS from the problematic PC15 to PA5 ---
#define BMP280_CS_PIN           PA5


// *************** SPI Flash (Blackbox) **********************
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define M25P16_CS_PIN           PA4
#define M25P16_SPI_BUS          BUS_SPI2
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

// *************** UART **********************
#define USE_VCP

#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

#define SERIAL_PORT_COUNT       3

// *************** Receiver (Serial/CRSF) **********************
#define USE_RX_SERIAL
#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_CRSF
#define SERIALRX_UART           SERIAL_PORT_USART2

// *************** I2C **********************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9
#define DEFAULT_I2C_BUS         BUS_I2C1

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_ALL

#define USE_RANGEFINDER
#define RANGEFINDER_I2C_BUS     BUS_I2C1

// *************** ADC *********************
#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC1_DMA_STREAM             DMA2_Stream0
#define ADC_CHANNEL_1_PIN           PA7
#define ADC_CHANNEL_2_PIN           PA6

#define VBAT_ADC_CHANNEL            ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2

// *************** LED Strip **********************
#define USE_LED_STRIP
#define WS2811_PIN                  PB0

// ***************  OTHERS *************************
#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL | FEATURE_OSD | FEATURE_CURRENT_METER | FEATURE_VBAT | FEATURE_TELEMETRY | FEATURE_SOFTSERIAL )

#define VBAT_SCALE_DEFAULT      1100
#define CURRENT_METER_SCALE     250  //F411-WTE 132A

#define USE_DSHOT
#define USE_ESC_SENSOR
#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define MAX_PWM_OUTPUT_PORTS       11