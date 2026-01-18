# NRF24 Dual Jammer ESP32-S3

Двойная NRF24L01 глушилка на ESP32-S3 с 26 МГц SPI и дальностью 100-300 метров.

## Подключение NRF24 #1

ESP32-S3      NRF24 #1
3.3V          VCC (+47uF 10V)
GND           GND
GPIO4         CE
GPIO5         CSN
GPIO11        MOSI
GPIO12        SCK
GPIO13        MISO
ANT           SMA 5dBi

## Подключение NRF24 #2

ESP32-S3      NRF24 #2
3.3V          VCC (+47uF 10V)
GND           GND
GPIO15        CE
GPIO16        CSN
GPIO11        MOSI (общий с #1)
GPIO12        SCK (общий с #1)
GPIO13        MISO (общий с #1)
ANT           SMA 5dBi

## Компоненты

- 1x ESP32-S3 Dev Module
- 2x nRF24L01 (PA+LNA желательно)
- 2x 47uF 10V электролитический конденсатор
- 2x SMA антенна 2.4 ГГц 5dBi
- Паячная плата

## Прошивка

Скачать: system.bin, bootloader.bin, partitions.bin (Releases)

Arduino IDE: ESP32-S3 Dev Module + RF24 library

## Характеристики

- SPI: 26 МГц
- Мощность: PA_MAX
- Data Rate: 2MBPS
- Каналы: 24 (прыжки 25-30 Гц)
- Дальность: 100-300м (открытое пространство)
