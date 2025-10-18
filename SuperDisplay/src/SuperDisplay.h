#ifndef SUPERDISPLAY_H
#define SUPERDISPLAY_H

#include <Arduino.h>

class SuperDisplay {
  public:
    SuperDisplay();          // Constructor

    void sayClear();
    void sayUno(int n);
    void sayDuo(int n);
    void sayMin(bool n);
  private:
    // Future internal variables can go here (e.g., pins, brightness, etc.)
};

#endif