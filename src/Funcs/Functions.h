#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#pragma once

#include <string>
#include <iostream>
#include <algorithm>

#ifdef _WIN64
#include <windows.h>
#elif __linux__
#include <unistd.h>
#endif

class FUNCTIONS
{

public:
    class ETC_FUNC
    {
    public:
        static std::string switchErrorMsg()
        {
            return "Enum member out of bounds.";
        }

        static int clearScreen()
        {
            return printf("\r\033[2J\033[H");
        }

        class InvalidInputEx : public std::exception
        {
        public:
            virtual const char *what() const throw()
            {
                return "Impossible to read data provided.";
            }
        };

        static void GoToSleep()
        {
            std::cout << ("Program paused...\n") << std::flush;
#ifdef _WIN64
            return Sleep(3000);
#elif __linux__
            return sleep(3);
#endif
        }
    };

    void clearFinalData()
    {
        m_var.finalValueFixed = 0.0;
        m_var.enableFunction = false;
        for (int i = 0; i < 6; i++)
        {
            m_var.ReadSwitchValue[i] = 0;
        }
    } // clearFinalData

    double FixSimpleValue(const std::string &_string)
    {
        try
        {
            std::string cleanedValue = _string;
            cleanedValue.erase(std::remove_if(
                                   cleanedValue.begin(),
                                   cleanedValue.end(), [](char c)
                                   { return !std::isdigit(c); }),
                               cleanedValue.end());
            if (!cleanedValue.empty())
            {
                m_var.finalValueFixed = std::stod(cleanedValue);
                return m_var.finalValueFixed;
            }
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
            throw ETC_FUNC::InvalidInputEx();
        }
        return 0.0;
    } // FixSimpleValue

    bool continueFunction(std::string _string)
    {
        try
        {
            std::transform(_string.begin(),
                           _string.end(),
                           _string.begin(), tolower);
            if (m_var.confirmationMap[_string] != 1)
            {
                std::cerr << "Transaction canceled.\n"
                          << std::endl;
                return m_var.enableFunction = false;
            }
            std::cout << "Transaction started.\n"
                      << std::endl;
            return m_var.enableFunction = true;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
            throw ETC_FUNC::InvalidInputEx();
        }
    } // continueFunction

    int CalculatePrice(double _x, double _y, double inputPrice)
    {
        ETC_FUNC::clearScreen();
        if (m_var.enableFunction != true)
        {
            return 1;
        }
        if (inputPrice < _x)
        {
            std::cout << "Price is below the range." << std::endl;
            ETC_FUNC::GoToSleep();
            return 1;
        }

        bool withinRange = (inputPrice >= _x && inputPrice <= _y);
        std::cout << "Price is " << (withinRange ? "" : "not ") << "within the range." << std::endl;
        ETC_FUNC::GoToSleep();
        return withinRange ? 1 : 0;
    } // CalculatePrice
};

#endif // FUNCTIONS_H