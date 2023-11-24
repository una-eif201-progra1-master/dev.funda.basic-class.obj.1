//
// Created by Maikol Guzman on 24/11/23.
//

#ifndef MAIN_MATRIXEXAMPLE_H
#define MAIN_MATRIXEXAMPLE_H

#include <vector>

/*!
 * \class MatrixExample
 * \brief This class is used to show how to use matrix
 */
class MatrixExample {
public:
    std::vector<std::vector<int>> createMatrix(int rows, int cols) {
        std::vector<std::vector<int>> mat(rows, std::vector<int>(cols, 0));
        return mat;
    }
};

#endif //MAIN_MATRIXEXAMPLE_H
