# Super Display

Library for displaying all sorts of values and states on HTL-UNO's HEX Display, LED lightbar and RGB LED.

## HowTo

### Include Library
```cpp
#include <SuperDisplay.h>
SuperDisplay super;
```

## HEX Display

### Basic Operations
```cpp
super.sayClear();      //turns off all segments
super.sayError();      //shows a state of error
```

### First decimal
```cpp
super.Uno(n);          //sets the first byte to n
```
All hex values are accepted (**0 - 15**) everything outside will show an error (segment **a** + **b**).

### Second decimal
```cpp
super.Duo(n);          //sets the second byte to n
```
Values **0** and **1** are accepted, anything else will show an error.

### Leading minus
```cpp
super.Min(n);          //toggles the leading minus
```
Accepts only **boolean** values.

## LED lightbar

### Basic Operations
```cpp
super.barClear();       //deactivates all leds
super.barAll(state);    //turns all leds on or off
```

### Set Operation
```cpp
super.barSet(n, state);
```
Sets the LED with PIN number **n** to either **true** or **false**.

### Other Operations
```cpp
super.barOdd(state);    //all odd numbered LEDs
super.barEven(state);   //all even numbered LEDs
```

# The Whole Iceberg

### Power Pins

|PIN |POWER TO|
|----|--------|
| 10 | HEX - Display  |
| 11 | LED - Lightbar |
| 12 | RGB - LED      |

## HEX Display

|SEG|LED|PIN|
|---|---------|:---:|
| a | V12 V13 | 0
| b | V16 V19 | 1
| c | V26 V29 | 2
| d | V30 V31 | 3
| e | V24 V27 | 4
| f | V15 V18 | 5
| g | V22 V23 | 6

![displayLayout](https://raw.githubusercontent.com/steepangle/htl-uno/refs/heads/main/media/displayLayout.png)

*Physical layout of the segments on the board.*

## LED lightbar

|PIN| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|---|---|---|---|---|---|---|---|---|---|---|
|LED|V32|V33|V34|V35|V36|V37|V38|V39|V40|V41|

![lightbarLayout](https://raw.githubusercontent.com/steepangle/htl-uno/refs/heads/main/media/barLayout.png)

*Layout on the board, rotated by 90° to the right.*

## RGB LED

|PIN|COLOR|LED|
|---|-----|----|
| 9 | BL | V43 |
| 6 | GR | V43 |
| 5 | RD | V43 |