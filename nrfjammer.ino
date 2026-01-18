#include "RF24.h"

RF24 radio1(4, 5, 26000000);
RF24 radio2(15, 16, 26000000);

byte hopping_channel[] = { 32, 34, 46, 48, 50, 52, 0, 1, 2, 4, 6, 8, 22, 24, 26, 28, 30, 74, 76, 78, 80, 82, 84, 86 };
byte ptr_hop1 = 0, ptr_hop2 = 12;

void setup(void) {
  Serial.begin(115200);
  
  // Инициализация модуль 1
  if (!radio1.begin()) { Serial.println("ERROR nrf24 number one"); while(1); }
  radio1.setPALevel(RF24_PA_MAX);
  radio1.setDataRate(RF24_2MBPS);
  radio1.setCRCLength(RF24_CRC_DISABLED);
  radio1.setAutoAck(false);
  radio1.stopListening();
  radio1.startConstCarrier(RF24_PA_MAX, hopping_channel[0]);
  
  // Инициализация модуль 2  
  if (!radio2.begin()) { Serial.println("ERROR nrf24 number two"); while(1); }
  radio2.setPALevel(RF24_PA_MAX);
  radio2.setDataRate(RF24_2MBPS);
  radio2.setCRCLength(RF24_CRC_DISABLED);
  radio2.setAutoAck(false);
  radio2.stopListening();
  radio2.startConstCarrier(RF24_PA_MAX, hopping_channel[12]);
  
}

void loop(void) {
  ptr_hop1++; if (ptr_hop1 >= sizeof(hopping_channel)) ptr_hop1 = 0;
  radio1.setChannel(hopping_channel[ptr_hop1]);
  
  ptr_hop2++; if (ptr_hop2 >= sizeof(hopping_channel)) ptr_hop2 = 0;
  radio2.setChannel(hopping_channel[ptr_hop2]);
}
