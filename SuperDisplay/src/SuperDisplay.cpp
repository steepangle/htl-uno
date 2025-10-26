#include "SuperDisplay.h"

SuperDisplay::SuperDisplay() {
  for (int i = 0; i <= 12; i++) {
    pinMode(i, OUTPUT);
  }
}

void SuperDisplay::sayClear() {
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);

  for (int i = 0; i <= 9; i++) {
    digitalWrite(i, HIGH);
  }
}

void SuperDisplay::sayUno(int n) {
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);

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
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);

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
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);

  digitalWrite(8, n ? LOW : HIGH);
}

void SuperDisplay::sayError() {
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);

  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
}

void SuperDisplay::barClear() {
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);

  for (int i = 0; i <= 9; i++) {
    digitalWrite(i, HIGH);
  }
}

void SuperDisplay::barAll(bool state) {
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);

  for (int i = 0; i <= 9; i++) {
    digitalWrite(i, state ? LOW : HIGH);
  }
}

void SuperDisplay::barSet(int n, bool state) {
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);

  digitalWrite(n, state ? LOW : HIGH);
}

void SuperDisplay::barOdd(bool state) {
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);

  for (int i = 1; i <= 9; i += 2) {
    digitalWrite(i, state ? LOW : HIGH);
  }
}

void SuperDisplay::barEven(bool state) {
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);

  for (int i = 0; i <= 8; i += 2) {
    digitalWrite(i, state ? LOW : HIGH);
  }
}

void SuperDisplay::rgbSet(bool r, bool g, bool b) {
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);

  digitalWrite(5, r ? LOW : HIGH);
  digitalWrite(6, g ? LOW : HIGH);
  digitalWrite(9, b ? LOW : HIGH);
}