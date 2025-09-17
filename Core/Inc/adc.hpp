#ifndef ADC_HPP_
#define ADC_HPP_

#include <stdint.h>

class adc{
    public:
        virtual uint16_t getRawValue();
};

#endif
