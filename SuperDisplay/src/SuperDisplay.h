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

    void barClear();
    void barAll(bool state);
    void barOdd(bool state);
    void barEven(bool state);
    void barSet(int n, bool state);

    void rgbClear();
    void rgbSetAll(bool r, bool g, bool b);
    void rgbSetSingle(char led, bool state);
    void rgbOn(char led);
    void rgbOff(char led);
  private:
};

#endif