#ifndef MAINSWITCH_H
#define MAINSWITCH_H

#pragma once

#include <string>
#include <iostream>

class MAIN_SWITCH
{
    std::string confirmationStringForSwitch;
    std::string readFinalPrice;

public:
    void EXECUTE_SWITCH(MAINVAR::EnumSwitchClass EnumSwitchClass)
    {
        switch (EnumSwitchClass)
        {
        case MAINVAR::EnumSwitchClass::CarsMenu: // 1
        {
            switch (m_var.ReadSwitchValue[0])
            {
            case 1: // Lamborghini Diablo SE30
            {
                std::cout
                    << sstr.STREAM_ARRAY(0)
                    << "Price: $224,454 - $1,300,000\n"
                    << "Do you want to buy this vehicle? [y/n]\n";
                std::cin >> confirmationStringForSwitch;
                func.continueFunction(confirmationStringForSwitch);
                if (m_var.enableFunction != true)
                {
                    return;
                }
                etc.clearScreen();
                std::cout
                    << "How much are you willing to pay within the following price range:\n"
                    << "$224,454 - $1,300,000" << std::endl;
                std::cin >> readFinalPrice;
                func.FixSimpleValue(readFinalPrice);
                func.CalculatePrice((double)224454, (double)1300000, m_var.finalValueFixed);
                func.clearFinalData();
                break;
            }
            case 2: // Koenigsegg Jesko
            {
                std::cout
                    << sstr.STREAM_ARRAY(1)
                    << "Price: $3,000,000 - $3,400,000\n"
                    << "Do you want to buy this vehicle? [y/n]\n";
                std::cin >> confirmationStringForSwitch;
                func.continueFunction(confirmationStringForSwitch);
                if (m_var.enableFunction != true)
                {
                    return;
                }
                etc.clearScreen();
                std::cout
                    << "How much are you willing to pay within the following price range:\n"
                    << "$3,000,000 - $3,400,000" << std::endl;
                std::cin >> readFinalPrice;
                func.FixSimpleValue(readFinalPrice);
                func.CalculatePrice((double)3000000, (double)3400000, m_var.finalValueFixed);
                func.clearFinalData();
                break;
            }
            case 3: // Lamborghini Veneno
            {
                std::cout
                    << sstr.STREAM_ARRAY(2)
                    << "Price: $3,500,000 - $4,000,000\n"
                    << "Do you want to buy this vehicle? [y/n]\n";
                std::cin >> confirmationStringForSwitch;
                func.continueFunction(confirmationStringForSwitch);
                if (m_var.enableFunction != true)
                {
                    return;
                }
                etc.clearScreen();
                std::cout
                    << "How much are you willing to pay within the following price range:\n"
                    << "$3,500,000 - $4,000,000" << std::endl;
                std::cin >> readFinalPrice;
                func.FixSimpleValue(readFinalPrice);
                func.CalculatePrice((double)3500000, (double)4000000, m_var.finalValueFixed);
                func.clearFinalData();
                break;
            }

            default:
                etc.switchErrorMsg();
                break;
            }
            break;
        }
        case MAINVAR::EnumSwitchClass::MotorcycleMenu: // 2
        {
            switch (m_var.ReadSwitchValue[1])
            {
            case 1: // Kawasaki ZX-10R
            {
                std::cout
                    << sstr.STREAM_ARRAY(3)
                    << "Price: $32,995 - $36,995\n"
                    << "Do you want to buy this vehicle? [y/n]\n";
                std::cin >> confirmationStringForSwitch;
                func.continueFunction(confirmationStringForSwitch);
                if (m_var.enableFunction != true)
                {
                    return;
                }
                etc.clearScreen();
                std::cout
                    << "How much are you willing to pay within the following price range:\n"
                    << "$32,995 - $36,995" << std::endl;
                std::cin >> readFinalPrice;
                func.FixSimpleValue(readFinalPrice);
                func.CalculatePrice((double)32995, (double)36995, m_var.finalValueFixed);
                func.clearFinalData();
                break;
            }
            case 2: // Yamaha YZF-R1 60th Anniversary
            {
                std::cout
                    << sstr.STREAM_ARRAY(4)
                    << "Price: $17,599 - $26,299\n"
                    << "Do you want to buy this vehicle? [y/n]\n";
                std::cin >> confirmationStringForSwitch;
                func.continueFunction(confirmationStringForSwitch);
                if (m_var.enableFunction != true)
                {
                    return;
                }
                etc.clearScreen();
                std::cout
                    << "How much are you willing to pay within the following price range:\n"
                    << "$17,599 - $26,299" << std::endl;
                std::cin >> readFinalPrice;
                func.FixSimpleValue(readFinalPrice);
                func.CalculatePrice((double)17599, (double)26299, m_var.finalValueFixed);
                func.clearFinalData();
                break;
            }
            case 3: // 2022 BMW M1000RR
            {
                std::cout
                    << sstr.STREAM_ARRAY(5)
                    << "Price: $16,399 - $17,699\n"
                    << "Do you want to buy this vehicle? [y/n]\n";
                std::cin >> confirmationStringForSwitch;
                func.continueFunction(confirmationStringForSwitch);
                if (m_var.enableFunction != true)
                {
                    return;
                }
                etc.clearScreen();
                std::cout
                    << "How much are you willing to pay within the following price range:\n"
                    << "$16,399 - $17,699" << std::endl;
                std::cin >> readFinalPrice;
                func.FixSimpleValue(readFinalPrice);
                func.CalculatePrice((double)16399, (double)17699, m_var.finalValueFixed);
                func.clearFinalData();
                break;
            }

            default:
                etc.switchErrorMsg();
                break;
            }
            break;
        }
        case MAINVAR::EnumSwitchClass::PlaneMenu: // 3
        {
            switch (m_var.ReadSwitchValue[2])
            {
            case 1: // F-22 Raptor
            {
                std::cout
                    << sstr.STREAM_ARRAY(6)
                    << "Price: $143,000,000 - $350,000,000\n"
                    << "Do you want to buy this vehicle? [y/n]\n";
                std::cin >> confirmationStringForSwitch;
                func.continueFunction(confirmationStringForSwitch);
                if (m_var.enableFunction != true)
                {
                    return;
                }
                etc.clearScreen();
                std::cout
                    << "How much are you willing to pay within the following price range:\n"
                    << "$143,000,000 - $350,000,000" << std::endl;
                std::cin >> readFinalPrice;
                func.FixSimpleValue(readFinalPrice);
                func.CalculatePrice((double)143000000, (double)350000000, m_var.finalValueFixed);
                func.clearFinalData();
                break;
            }
            case 2: // Air Force One 747-8
            {
                std::cout
                    << sstr.STREAM_ARRAY(7)
                    << "Price: $3,900,000,000 - $4,000,000,000\n"
                    << "Do you want to buy this vehicle? [y/n]\n";
                std::cin >> confirmationStringForSwitch;
                func.continueFunction(confirmationStringForSwitch);
                if (m_var.enableFunction != true)
                {
                    return;
                }
                etc.clearScreen();
                std::cout
                    << "How much are you willing to pay within the following price range:\n"
                    << "$3,900,000,000 - $4,000,000,000" << std::endl;
                std::cin >> readFinalPrice;
                func.FixSimpleValue(readFinalPrice);
                func.CalculatePrice((double)3900000000, (double)4000000000, m_var.finalValueFixed);
                func.clearFinalData();
                break;
            }
            case 3: // B-2 Spirit
            {
                std::cout
                    << sstr.STREAM_ARRAY(8)
                    << "Price: $1,173,000,000 - $15,480,000,000\n"
                    << "Do you want to buy this vehicle? [y/n]\n";
                std::cin >> confirmationStringForSwitch;
                func.continueFunction(confirmationStringForSwitch);
                if (m_var.enableFunction != true)
                {
                    return;
                }
                etc.clearScreen();
                std::cout
                    << "How much are you willing to pay within the following price range:\n"
                    << "$1,173,000,000 - $15,480,000,000" << std::endl;
                std::cin >> readFinalPrice;
                func.FixSimpleValue(readFinalPrice);
                func.CalculatePrice((double)1173000000, (double)15480000000, m_var.finalValueFixed);
                func.clearFinalData();
                break;
            }

            default:
                etc.switchErrorMsg();
                break;
            }
            break;
        }

        default:
            etc.switchErrorMsg();
            break;
        }
    }
};

#endif // MAINSWITCH_H