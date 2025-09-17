#include <stdlib.h>

#include "adc.hpp"

#undef  RAND_MAX
#define RAND_MAX 65534

adc::adc()
{
    srand(0);
}

uint16_t adc::getRawValue()
{
    return rand() % RAND_MAX;
}
