#ifndef VOLTAGESENSOR_HPP_
#define VOLTAGESENSOR_HPP_
#include <stdint.h>

#include "adc.hpp"

class voltageSensor{
    public:
        voltageSensor(float aGain, float anOffset, Adc &anAdc);
        //virtual float getVoltage();
    private:
        float gain;
        float offset;
        Adc &vadc;
};

#endif
