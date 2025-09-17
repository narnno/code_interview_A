#ifndef VOLTAGESENSOR_MANAGER_HPP_
#define VOLTAGESENSOR_MANAGER_HPP_
#include <stdint.h>
#include <vector>
#include "voltageSensor.hpp"

using std::vector;

class voltageSensorManager{
    public:
        voltageSensorManager(vector<voltageSensor>vect);
        virtual float getAverageVoltage();
    private: 
        vector<voltageSensor> voltageSensorVector;
};

#endif
