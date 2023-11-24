//
// Created by Maikol Guzman on 24/11/23.
//

#ifndef MAIN_SWITCHEXAMPLE_H
#define MAIN_SWITCHEXAMPLE_H

#include <iostream>

/*!
 * \class SwitchExample
 * \brief This class is used to show how to use switch statements
 */
class SwitchExample {
public:
    void dayOfWeek(int day) {
        switch (day) {
            case 1: std::cout << "Monday\n"; break;
            case 2: std::cout << "Tuesday\n"; break;
                //... other cases
            default: std::cout << "Invalid day\n";
        }
    }
};

#endif //MAIN_SWITCHEXAMPLE_H
