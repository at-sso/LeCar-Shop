#ifndef MAINMENUS_H
#define MAINMENUS_H

#pragma once

#include <iostream>

class MAIN_MENUS
{
public:
    void CarMenu() // use ReadSwitchValue[0]
    {
        etc.clearScreen();
        std::cout
            << "Avaible Cars:\n"
            << "1. \"Lamborghini Diablo SE30\"\n"
            << "2. \"Koenigsegg Jesko\"\n"
            << "3. \"Lamborghini Veneno\"\n"
            << "* End *\n";
        std::cin >> m_var.ReadSwitchValue[0];
        etc.clearScreen();
        return m_switch.EXECUTE_SWITCH(MAINVAR::EnumSwitchClass::CarsMenu);
    } // CarMenu

    void MotorcycleMenu() // use ReadSwitchValue[1]
    {
        etc.clearScreen();
        std::cout
            << "Avaible Motorcycles:\n"
            << "1. \"Kawasaki ZX-10R\"\n"
            << "2. \"Yamaha YZF-R1 60th Anniversary\"\n"
            << "3. \"2022 BMW M1000RR\"\n"
            << "* End *\n";
        std::cin >> m_var.ReadSwitchValue[1];
        etc.clearScreen();
        return m_switch.EXECUTE_SWITCH(MAINVAR::EnumSwitchClass::MotorcycleMenu);
    } // MotorcycleMenu

    void AirplaneMenu() // use ReadSwitchValue[2]
    {
        etc.clearScreen();
        std::cout
            << "Avaible Airplanes:\n"
            << "1. \"F-22 Raptor\"\n"
            << "2. \"Air Force One 747-8\"\n"
            << "3. \"B-2 Spirit\"\n"
            << "* End *\n";
        std::cin >> m_var.ReadSwitchValue[2];
        etc.clearScreen();
        return m_switch.EXECUTE_SWITCH(MAINVAR::EnumSwitchClass::PlaneMenu);
    } // AirplaneMenu
};

#endif // MAINMENUS_H