#ifndef SUPERDISPLAY_H
#define SUPERDISPLAY_H

#include <Arduino.h>

class SuperDisplay {
  public:
    SuperDisplay();

    void sayClear();
    void sayUno(int n);
    void sayDuo(int n);
    void sayMin(bool n);
    void sayError();
  private:
};

#endif