# Buzzer con Arduino
Emitiremos sonidos intermitentes con la función millis y Arduino.

### Requisitos
- Tener el IDE de [Arduino](https://www.arduino.cc/en/Main/Software) (o el de tu preferencia) con la versión más actual
- Tener el material para hacer el proyecto

### Código
**[Aqui](https://github.com/proyectoTEOS/Buzzer-con-Arduino/blob/master/Buzzer-con-Arduino.ino)** podrás obtener el link del código, también dejaremos una vista previa aquí abajo.

```c++
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
```

### Diagrama
El siguiente esquemático muestra como se debe conectar todos los componentes con la placa.
![](https://github.com/proyectoTEOS/Buzzer-con-Arduino/blob/master/buzzer-con-arduino.jpg)
