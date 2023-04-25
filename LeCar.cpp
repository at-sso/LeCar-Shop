// Made by sso.

#include "src/Funcs/Variables.h"
MAINVAR m_var;
#include "src/Funcs/Functions.h"
FUNCTIONS func;
FUNCTIONS::ETC_FUNC etc;
#include "src/Menus/MainStrings.h"
STREAM_STRING sstr;
#include "src/Menus/MainSwitch.h"
MAIN_SWITCH m_switch;
#include "src/Menus/MainMenus.h"
MAIN_MENUS m_menus;

#include <iostream>

int main()
{
    int mainSwitch;
    while (true)
    {
        if (m_var.isFirstTime)
        {
            std::cout << "Welcome to LeCar Shop.\n";
            m_var.isFirstTime = false;
        }

        std::cout
            << "Choose a vehicle.\n"
            << "0. Exit.\n"
            << "1. Car.\n"
            << "2. Motorcycle.\n"
            << "3. Airplane." << std::endl;
        std::cin >> mainSwitch;

        switch (mainSwitch)
        {
        default:
            etc.switchErrorMsg();
            break;

        case 0:
            return 0;
        case 1: // car
            m_menus.CarMenu();
            break;
        case 2: // motorcycle
            m_menus.MotorcycleMenu();
            break;
        case 3: // air plane
            m_menus.AirplaneMenu();
            break;
        }
    }
}