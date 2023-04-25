#ifndef VARIABLES_H
#define VARIABLES_H

#pragma once

#include <map>
#include <string>

class MAINVAR
{
public:
    bool isFirstTime = true;

    int ReadSwitchValue[3] = {
        0, 0, 0};

    bool enableFunction = false;

    double finalValueFixed = 0.0;

    std::map<std::string, int> confirmationMap = {
        {"y", 1},
        {"n", 2},
    };

    enum class EnumSwitchClass
    {
        CarsMenu,
        MotorcycleMenu,
        PlaneMenu
    };
};

#endif // VARIABLES_H