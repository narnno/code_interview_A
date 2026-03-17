#ifndef ISENSOR_HPP_
#define ISENSOR_HPP_
#include <stdint.h>

class ISensor{
    public:
        ISensor();
        virtual float getConvertedSample() = 0;
    private:
};

#endif

