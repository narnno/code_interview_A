#ifndef VOLTAGESENSOR_HPP_
#define VOLTAGESENSOR_HPP_
#include <stdint.h>

#include "adc.hpp"

class voltageSensor{
    public:
        voltageSensor(float aGain, float anOffset, adc &anAdc);
        virtual float getVoltage();
    private:
        float gain;
        float offset;
        adc &vadc;
};

#endif
