/*
  Created by TEOS
  Domotic with Arduino https://goo.gl/btZpjs
  YouTube https://goo.gl/k7TUSZ
  Instagram https://goo.gl/zEIjia
  Facebook https://goo.gl/eivraR
  Twitter https://goo.gl/du5Wgn
  Github https://goo.gl/Xl5IiS
  WEB https://www.proyecto-teos.com
*/

const uint16_t intervalT = 500;
uint8_t speakerStatusT = LOW, speakerPinT = 3, varVolumeT = 3, volumeT;
unsigned long previousMillisT;

void setup() {
  pinMode(speakerPinT, OUTPUT);
  previousMillisT = millis();
}

void loop() {
  unsigned long currentMillisT = millis();
  if ((unsigned long)(currentMillisT - previousMillisT) >= intervalT) {
    speakerStatusT = (speakerStatusT) ? LOW : HIGH;
    volumeT = (speakerStatusT) ? varVolumeT : 0;
    analogWrite(speakerPinT, volumeT);
    previousMillisT = millis();
  }
}
