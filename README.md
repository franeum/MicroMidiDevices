# MicroMidiDevices

by [francesco bianchi](https://www.francescobianchi.cloud)

A (very) simple library for ATmega32u4 (Arduino Micro and Leonardo) to create MIDI (over USB) controllers using various input devices. Currently are allowed potentiometers and rotary encoders.

Every device shares the same API, and it's base on a paradigm called IU: *Instantiate and Update*. For example, to manage a potentiometer:

```c++
#include <MicroMidiDevices.h>

// instantiate (and configure) the pot with pin, midi channel (1-16), controller number and label for debugging
MMPot pot(A0, 1, 50, "POT1");

void setup() {
    // nothing to do
}

void loop() {
    pot.update();
}
```

Alternatively, you can instantiate a device and after configurate it in the `setup` function. The following code does the same thing as the previous one:

```c++
#include <MicroMidiDevices.h>

// instantiate (and configure) the pot
MMPot pot;

void setup() {
    pot.begin(A0, 1, 50, "POT1");
}

void loop() {
    pot.update();
}
```

If you want to use an encoder, the code is pretty identical:

```c++
#include <MicroMidiDevices.h>

// instantiate (and configure) the pot
MMEnc enc;

void setup() {
    // the only differences are that encoder has two (digital) pins connected
    enc.begin(D2, D3, 1, 50, "ENC");
}

void loop() {
    // all done!
    enc.update();
}
```

Credits:
- Damien Clarke, [Responsive AnalogRead Library](https://github.com/dxinteractive/ResponsiveAnalogRead)
- Peter Harrison, [BasicEncoder Library](https://github.com/micromouseonline/BasicEncoder)

