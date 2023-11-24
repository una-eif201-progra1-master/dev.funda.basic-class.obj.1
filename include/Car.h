//
// Created by Maikol Guzman on 24/11/23.
//

#ifndef MAIN_CAR_H
#define MAIN_CAR_H

#include <iostream>

/*!
 * \class Car
 * \brief The class Car is the base class
 * \file Car.h
 * \brief The file Car.h is the header file of the class Car
 */

class Car {
private: // Encapsulation
    std::string color; // Attribute
    int speed; // Attribute

public:
    Car(std::string c, int s) : color(c), speed(s) {} // Constructor

    void accelerate() { // Method
        speed += 10;
    }

    void display() const { // Method showing state
        std::cout << "Car color: " << color << ", Speed: " << speed << " km/h\n";
    }

    // Getter and Setter for encapsulation and direct/indirect access
    void setColor(std::string c) {
        color = c;
    }

    std::string getColor() const {
        return color;
    }
};

#endif //MAIN_CAR_H
