#pragma once 

class gpio
{
public:
    gpio(int pin, int mode=OUTPUT);
    void on();
    void off();
    void toggle();
    bool isOn();
    bool isOff();

private:
    int _pin;
    
}; 