#ifndef ADC_HPP_
#define ADC_HPP_

#include <stdint.h>

class adc{
    public:
        adc();
        virtual uint16_t getRawValue();
};

#endif
