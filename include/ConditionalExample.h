//
// Created by Maikol Guzman on 24/11/23.
//

#ifndef MAIN_CONDITIONALEXAMPLE_H
#define MAIN_CONDITIONALEXAMPLE_H

#include <iostream>

/*!
 * \class ConditionalExample
 * \brief This class is used to show how to use conditional statements
 */
class ConditionalExample {
public:
    void checkNumber(int number) {
        if (number > 0) {
            std::cout << "Number is positive\n";
        } else if (number < 0) {
            std::cout << "Number is negative\n";
        } else {
            std::cout << "Number is zero\n";
        }
    }
};
#endif //MAIN_CONDITIONALEXAMPLE_H
