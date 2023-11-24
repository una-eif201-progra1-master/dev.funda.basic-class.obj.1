//
// Created by Maikol Guzman on 22/11/23.
//
#include <iostream>
#include <cstdlib>
#include "ConditionalExample.h"
#include "SwitchExample.h"
#include "LoopExample.h"
#include "VectorExample.h"
#include "MatrixExample.h"
#include "Car.h"

/*!
 * \mainpage Technical documentation of the example.
 * \section buildingproject Building the Project
 *
 * \subsection step1 Creating a Build Directory
 *
 * It's a good practice to do an out-of-source build. This keeps your build files separate from your source files.
 * \code{.sh}
 * mkdir build
 * cd build
 * \endcode
 * \subsection step2 Running CMake
 * From within the build directory, run CMake to generate the build system.
 *
 * \code{.sh}
 * cmake ..
 * \endcode
 *
 * \subsection step3 Compiling the Project
 * After CMake has done its job, you can use the generated build system to compile the project.
 *
 * \code{.sh}
 * make
 * \endcode
 * This will compile your project and generate an executable in the build directory.
 *
 * \section references References
 *
 * <a href="https://github.com/una-eif201-progra1-master/dev.funda.basic-class.objects.1">Github repository of the example</a>
 *
 * \date 2021-11-23
 * \author Maikol Guzman Alan
 * \copyright <a href="https://mikeguzman.dev/">mikeguzman.dev</a>
 *
 * \file main.cpp
 * \brief The main.cpp file contains the entry point of the program.
 */

int main() {
    system("clear");
    std::cout << "Universidad Nacional de Costa Rica - www.mikeguzman.dev" << std::endl;

    ConditionalExample ce;
    ce.checkNumber(5);

    SwitchExample se;
    se.dayOfWeek(3);

    LoopExample le;
    le.printNumbers(5);

    VectorExample ve;
    auto vec = ve.createVector(10);

    MatrixExample me;
    auto mat = me.createMatrix(3, 3);

    Car car("Red", 50);
    car.accelerate();
    car.display();

    std::cout << std::endl;
    return 0;
}