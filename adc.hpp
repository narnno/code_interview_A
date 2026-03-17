#ifndef ADC_HPP_
#define ADC_HPP_

#include <stdint.h>

class Adc{
    public:
        Adc();
        virtual uint16_t getRawValue();
};

#endif
