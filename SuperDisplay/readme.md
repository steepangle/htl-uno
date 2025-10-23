# Super Display

 Library for displaying all sorts of values on HTL-UNOs HEX Display.

## Segments


## HowTo

### Include Library
```cpp
#include <SuperDisplay.h>
SuperDisplay superD;
```

### Basic Operations
```cpp
superD.sayClear();      //turns off all segments
superD.sayError();      //shows a state of error
```

### First byte
```cpp
superD.Uno(n);          //sets the first byte to n
```
All hex values are accepted (0-15) everything outside will show an error.

### Second byte
```cpp
superD.Duo(n);          //sets the second byte to n
```
Values 0 and 1 are accepted, anything else will show an error.

### Leading minus
```cpp
superD.Min(n);          //toggles the leading minus
```
Accepts only boolean values.