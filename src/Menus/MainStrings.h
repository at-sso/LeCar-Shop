#ifndef MAINSTRINGS_H
#define MAINSTRINGS_H

#pragma once

#include <sstream>
#include <stdexcept>

class STREAM_STRING
{
    std::string ExecuteStream;
    std::stringstream MainStream;

public:
    std::string STREAM_ARRAY(int index)
    {
        switch (index)
        {
        case 0:
        {
            MainStream
                << "- From Wikipedia, the free encyclopedia.\n\n"
                << "The Lamborghini Diablo is a high-performance mid-engine sports car built by Italian\n"
                << "automobile manufacturer Lamborghini between 1990 and 2001. It is the first production Lamborghini\n"
                << "capable of attaining a top speed in excess of 320 kilometres per hour (200 mph).\n\n";
            return ExecuteStream = MainStream.str();
        }
        case 1:
        {
            MainStream
                << "- From Wikipedia, the free encyclopedia.\n\n"
                << "The Koenigsegg Jesko is a limited production mid-engine sports car produced by Swedish automobile\n"
                << "manufacturer Koenigsegg. The car was introduced at the 2019 Geneva Motor Show and it completely sold"
                << "out before the 2019 Geneva Motor Show ended. The car succeeds the Agera. The name Jesko is a tribute to\n"
                << "the company founder's father, Jesko von Koenigsegg.\n"
                << "There are two variations of the car \"Absolut\" (top speed) and \"Attack\" (track-focused).\n\n";
            return ExecuteStream = MainStream.str();
        }
        case 2:
        {
            MainStream
                << "- From Wikipedia, the free encyclopedia\n\n"
                << "The Lamborghini Veneno is a limited production high performance sports car manufactured\n"
                << "by Italian automobile manufacturer Lamborghini. Based on the Lamborghini Aventador,\n"
                << "the Veneno was developed to celebrate Lamborghini's 50th anniversary. It was introduced\n"
                << "at the 2013 Geneva Motor Show. When introduced, it had a price of US$4,000,000, making it one"
                << "of the most expensive production cars in the world.\n\n";
            return ExecuteStream = MainStream.str();
        }
        case 3:
        {
            MainStream
                << "- From Web Bike World.\n\n"
                << "BMW fully expects buyers of the M1000RR to be track day enthusiasts and has catered specifically to them.\n"
                << "You get the first BMW motorcycle to bear the M-Division designation, with fairings made from carbon fiber,\n"
                << "carbon fiber aerodynamic winglets, M carbon wheels, a milled, lightweight monoblock aluminum swingarm, M carbon brakes,\n"
                << "100% pure titanium exhaust made in concert with Akrapovic, an M-Division ECU and IMU with multiple ride modes, and\n"
                << "so much more that it'd take a novel to list them.\n\n";
            return ExecuteStream = MainStream.str();
        }
        case 4:
        {
            MainStream
                << "- From Web Bike World.\n\n"
                << "As with every other year, Yamaha Motorcycles continues to evolve and perfect the supersport formula, with lessons\n"
                << "learned from the track in both MotoGP and MotoAmerica Supersport 1000cc racing. 2022's evolution includes a mildly reworked\n"
                << "clutch with even better slip and assist for launches, as well as 0.1 inches more travel in the front KYB inverted forks,\n"
                << "up from 4.6 to 4.7 inches to make the front not quite as snappy over bumps and rougher roads.\n\n";
            return ExecuteStream = MainStream.str();
        }
        case 5:
        {
            MainStream
                << "- From Web Bike World.\n\n"
                << "Introduced in late 2021 as a 2022 model, the BMW M1000RR is one of those examples of the Germans taking something that was already\n"
                << "superb, the S1000RR, and then making it damned near perfect. While the S1000RR is based on the BMW race bikes in the World SBK\n"
                << "championship, the M1000RR is an almost 1-to-1 replica of the race bike, with only a few considerations for street legality added in.\n\n";
            return ExecuteStream = MainStream.str();
        }
        case 6:
        {
            MainStream
                << "- From Finances Online.\n"
                << "Considered one of the world's best fighter planes, the Raptor was built to combat Russia's sophisticated SU Flanker and MIG Fulcrum aircraft.\n"
                << "Its production was initiated in the 1980s to meet the Russian threat during the cold war. When the danger passed, production was halted and a total\n"
                << "187 Raptors have been provided to the US military.\n"
                << "The Raptor is a stealth, all-weather, twin-engine, single-seat, fifth-generation aircraft designed for the US Air Force. It boasts signal intelligence,\n"
                << "electronic warfare, and ground attack capabilities, and is used mainly as an air superiority fighter. The plane's weapons systems and airframe were built\n"
                << "by Lockheed Martin, while Boeing supplied the training systems, avionics integration, aft fuselage, and wings.\n\n";
            return ExecuteStream = MainStream.str();
        }
        case 7:
        {
            MainStream
                << "- From Finances Online.\n"
                << "Air Force One is a triple decker with 4,000 square feet of space. This gives all passengers plenty of leg room to stretch their legs.\n"
                << "The plane can easily hit a speed of 650 miles per hour. For medical emergencies, there is a mini hospital on board with specialist\n"
                << "doctors and an operation theater. The aircraft is equipped to survive meteor strikes, earthquake, and nuclear war. In case of an attack,\n"
                << "it deploy flares to counter heat-seeking missiles, ECM (electronic countermeasures), and radar-jamming technology. The plane has mid-air\n"
                << "refueling abilities and can be refueled even at 35,000 feet. However, President Donald Trump wishes to get rid of this facility to save money.\n\n";
            return ExecuteStream = MainStream.str();
        }
        case 8:
        {
            MainStream
                << "- From Finances Online.\n"
                << "The B-2 Spirit was launched in 1989. The program to develop it was initiated during the Carter administration in the late 1970s.\n"
                << "Northrop was chosen to build this fighter plane. The highlight of its design is a technique called “continuous curvature” which deflects radar.\n"
                << "In fact, its radar cross-section is just 1.1 square feet - the size of a pigeon. The bomber was first deployed in action in the Kosovo War in\n"
                << "1989 where it flew 50 sorties.\n\n";
            return ExecuteStream = MainStream.str();
        }

        default:
            throw FUNCTIONS::ETC_FUNC::InvalidInputEx();
        } // switch end
        return "";
    } // STREAM_ARRAY end
};

#endif // MAINSTRINGS_H