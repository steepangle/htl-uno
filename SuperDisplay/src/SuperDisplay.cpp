#include "SuperDisplay.h"

SuperDisplay::SuperDisplay() {
  // Initialize all digital pins as outputs (0–9 for values)
  for (int i = 0; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }

  // HEX Display select
  pinMode(10, OUTPUT);
  digitalWrite(10, LOW);

  // LED Bar
  pinMode(11, OUTPUT);
  digitalWrite(11, HIGH);
  // RGB LED
  pinMode(12, OUTPUT);
  digitalWrite(12, HIGH);
}

void SuperDisplay::sayClear() {
  for (int i = 0; i <= 9; i++) {
    digitalWrite(i, HIGH);
  }
}

void SuperDisplay::sayUno(int n) {
  switch (n) {
    case 0:  digitalWrite(0, LOW); digitalWrite(1, LOW); digitalWrite(2, LOW);
             digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5, LOW);
             digitalWrite(6, HIGH); break;

    case 1:  digitalWrite(0, HIGH); digitalWrite(1, LOW); digitalWrite(2, LOW);
             digitalWrite(3, HIGH); digitalWrite(4, HIGH); digitalWrite(5, HIGH);
             digitalWrite(6, HIGH); break;

    case 2:  digitalWrite(0, LOW); digitalWrite(1, LOW); digitalWrite(2, HIGH);
             digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5, HIGH);
             digitalWrite(6, LOW); break;

    case 3:  digitalWrite(0, LOW); digitalWrite(1, LOW); digitalWrite(2, LOW);
             digitalWrite(3, LOW); digitalWrite(4, HIGH); digitalWrite(5, HIGH);
             digitalWrite(6, LOW); break;

    case 4:  digitalWrite(0, HIGH); digitalWrite(1, LOW); digitalWrite(2, LOW);
             digitalWrite(3, HIGH); digitalWrite(4, HIGH); digitalWrite(5, LOW);
             digitalWrite(6, LOW); break;

    case 5:  digitalWrite(0, LOW); digitalWrite(1, HIGH); digitalWrite(2, LOW);
             digitalWrite(3, LOW); digitalWrite(4, HIGH); digitalWrite(5, LOW);
             digitalWrite(6, LOW); break;

    case 6:  digitalWrite(0, LOW); digitalWrite(1, HIGH); digitalWrite(2, LOW);
             digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5, LOW);
             digitalWrite(6, LOW); break;

    case 7:  digitalWrite(0, LOW); digitalWrite(1, LOW); digitalWrite(2, LOW);
             digitalWrite(3, HIGH); digitalWrite(4, HIGH); digitalWrite(5, HIGH);
             digitalWrite(6, HIGH); break;

    case 8:  digitalWrite(0, LOW); digitalWrite(1, LOW); digitalWrite(2, LOW);
             digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5, LOW);
             digitalWrite(6, LOW); break;

    case 9:  digitalWrite(0, LOW); digitalWrite(1, LOW); digitalWrite(2, LOW);
             digitalWrite(3, LOW); digitalWrite(4, HIGH); digitalWrite(5, LOW);
             digitalWrite(6, LOW); break;

    case 10: digitalWrite(0, LOW); digitalWrite(1, LOW); digitalWrite(2, LOW);
             digitalWrite(3, HIGH); digitalWrite(4, LOW); digitalWrite(5, LOW);
             digitalWrite(6, LOW); break;

    case 11: digitalWrite(0, HIGH); digitalWrite(1, HIGH); digitalWrite(2, LOW);
             digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5, LOW);
             digitalWrite(6, LOW); break;

    case 12: digitalWrite(0, LOW); digitalWrite(1, HIGH); digitalWrite(2, HIGH);
             digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5, LOW);
             digitalWrite(6, HIGH); break;

    case 13: digitalWrite(0, HIGH); digitalWrite(1, LOW); digitalWrite(2, LOW);
             digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5, HIGH);
             digitalWrite(6, LOW); break;

    case 14: digitalWrite(0, LOW); digitalWrite(1, HIGH); digitalWrite(2, HIGH);
             digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5, LOW);
             digitalWrite(6, LOW); break;

    case 15: digitalWrite(0, LOW); digitalWrite(1, HIGH); digitalWrite(2, HIGH);
             digitalWrite(3, HIGH); digitalWrite(4, LOW); digitalWrite(5, LOW);
             digitalWrite(6, LOW); break;
             
    default: digitalWrite(0, HIGH); digitalWrite(1, LOW); digitalWrite(2, HIGH);
             digitalWrite(3, HIGH); digitalWrite(4, LOW); digitalWrite(5, HIGH);
             digitalWrite(6, HIGH); break;
  }
}

void SuperDisplay::sayDuo(int n) {
  if (n == 0) {
    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
  } else if (n == 1) {
    digitalWrite(7, LOW);
    digitalWrite(9, LOW);
  } else {
    digitalWrite(7, HIGH);
    digitalWrite(9, LOW);
  }
}

void SuperDisplay::sayMin(bool n) {
  digitalWrite(8, n ? LOW : HIGH);
}