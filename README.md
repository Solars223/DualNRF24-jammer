# DualNRF24-jammer
NRF24-Dual-Jammer-ESP32S3
Компоненты:
2x nrf24l01
2x кондексатор 47uf 10V
1x esp32s3 dev module

Подключение:
кондексатор на 47uf 10v к vcc и gnd nrf24l01 (обеим)

Первый nrf24l01:

 1 (VCC)	3.3V
 2 (GND)	GND
 3 (CE)     4
 4 (CSN)    5
 5 (MOSI)  11 *
 6 (SCK)   12 *
 7 (MISO)  13 *

Второй nrf24l01:

 1 (VCC)	3.3V
 2 (GND)	GND
 3 (CE)     15
 4 (CSN)    16
 5 (MOSI)   11 *
 6 (SCK)    12 *
 7 (MISO)   13 *
