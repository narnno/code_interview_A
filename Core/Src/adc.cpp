#include "stdlib.h" // Needed for rand()

#include "adc.hpp"

#undef RAND_MAX
#define RAND_MAX 65534

uint16_t adc::getRawValue()
{
    return rand() % RAND_MAX;
}
