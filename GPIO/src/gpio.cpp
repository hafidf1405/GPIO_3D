#include <Arduino.h>
#include "gpio.h"

gpio::gpio(int pin, int mode)
{
    _pin = pin;
    pinMode(pin, mode);
}
 

void gpio::on()
{
    digitalWrite(_pin, HIGH);
    log_i("On...");
}

void gpio::off()
{
    digitalWrite(_pin, LOW);
    log_i("Off...");
}

bool gpio::isOn()
{
    return digitalRead(_pin)==HIGH;
} 

bool gpio::isOff()
{
    return !isOn();

}


void gpio::toggle()
{
    if(isOn())
        off();
    else
        on();
}
