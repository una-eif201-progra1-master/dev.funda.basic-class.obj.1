//
// Created by Maikol Guzman on 24/11/23.
//

#ifndef MAIN_VECTOREXAMPLE_H
#define MAIN_VECTOREXAMPLE_H

#include <vector>

/*!
 * \class VectorExample
 * \brief This class is used to show how to use vectors
 */
class VectorExample {
public:
    std::vector<int> createVector(int size) {
        std::vector<int> vec(size, 0); // Vector of given size with all values initialized to 0
        return vec;
    }
};

#endif //MAIN_VECTOREXAMPLE_H
