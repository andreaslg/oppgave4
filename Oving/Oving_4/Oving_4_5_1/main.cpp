#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

int main()
{
    std::string sensorReadings =
     "name: Sensor A, value: 34.9;"
     "name: Sensor B, Value: -9.2334200";
    std::string* sensorPtr = &sensorReadings;

    std::cout << *sensorPtr << std::endl;

    int startAvSisteDelIdx = sensorReadings.find_last_of(':');
    //int startAvSisteDelIdx =18;

    std::cout << "Midt index: "<<startAvSisteDelIdx << std::endl;

    int lengdeAvHeleSetning = sensorReadings.length();
    std::cout << "Hele lengde: "<<lengdeAvHeleSetning << std::endl;

    int restLengde = lengdeAvHeleSetning-1- startAvSisteDelIdx-1;
    char temp[restLengde];

    std::cout << restLengde << std::endl;

    int thirdPointDesimalIdx = sensorReadings.find_last_of('.');


    for (int i(0); i < restLengde; i++)
    {
        temp[i] = sensorReadings[(lengdeAvHeleSetning-1-restLengde)+i];
    };

    //float sensA=stoi(*sensorPtr);

    int tempLengde = sizeof(temp);

    for (int i(0); i < tempLengde; i++)
    {
        std::cout << temp[i];
    };
    std::cout << std::endl;

    // fjern avslutning



    // konvertering:
    float tall;

    std::stringstream ss;
    ss << temp;

    ss >> tall;
    tall = round(tall);

    std::cout << tall << std::endl;

    return 0;
}
