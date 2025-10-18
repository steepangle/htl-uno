#include <SuperDisplay.h>

SuperDisplay superD;

void setup() {
  superD.sayClear();
  delay(500);
}

void loop() {
  for (int i = 0; i < 16; i++) {
    superD.sayUno(i);
    delay(400);
  }

  superD.sayDuo(1);
  superD.sayMin(true);
  delay(1000);
  superD.sayMin(false);
}