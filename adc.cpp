#include <stdlib.h> // Needed for rand()

#include "adc.hpp"

#undef RAND_MAX
#define RAND_MAX 65534

Adc::Adc()
{
    srand(0);
}

uint16_t Adc::getRawValue()
{
    return rand() % RAND_MAX;
}
