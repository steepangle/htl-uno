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

    void rgbSet(bool r, bool g, bool b);
  private:
};

#endif // fortnite<05