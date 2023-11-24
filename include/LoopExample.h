//
// Created by Maikol Guzman on 24/11/23.
//

#ifndef MAIN_LOOPEXAMPLE_H
#define MAIN_LOOPEXAMPLE_H

#include <iostream>

/*!
 * \class LoopExample
 * \brief This class is used to show how to use loops
 */
class LoopExample {
public:
    void printNumbers(int n) {
        for (int i = 1; i <= n; i++) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }
};

#endif //MAIN_LOOPEXAMPLE_H
