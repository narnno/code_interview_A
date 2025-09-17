#include "voltageSensorManager.hpp"

voltageSensorManager::voltageSensorManager(vector<voltageSensor>vect):voltageSensorVector(vect)
{

}

float voltageSensorManager::getAverageVoltage()
{
    float average = 0.0;
    if(!voltageSensorVector.empty())
    {
        for(voltageSensor vs : voltageSensorVector)
        {
            average += vs.getVoltage();
        }
        average /= voltageSensorVector.size();
    }

    return average;
}
