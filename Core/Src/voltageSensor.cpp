#include "voltageSensor.hpp"

#undef RAND_MAX
#define RAND_MAX 65535

#define PEAK_PEAK_SIGNAL_AMPLITUDE_VOLTS (240) //Max amplitude of the input signal
#define RESOLUTION (65535u/PEAK_PEAK_SIGNAL_AMPLITUDE_VOLTS) //Resolution of the ADC (bit/Volt)


voltageSensor::voltageSensor(float aGain, float anOffset, adc &anAdc):gain(aGain),offset(anOffset),vadc(anAdc)
{

}

float voltageSensor::getVoltage()
{
    uint16_t raw = vadc.getRawValue();
    float converted =  raw / RESOLUTION;
    converted *= gain;
    converted += offset;
    return converted;
}