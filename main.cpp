#include <iostream>
#include <vector>
#include <string>

#include "adc.hpp"
#include "voltageSensor.hpp"


using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }

    Adc myAdc;
    cout<<myAdc.getRawValue()<<endl;

}