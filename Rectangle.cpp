//
// Created by alyss on 3/23/2025.
//
#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : Polygon() {
    // Default constructor calls the Polygon constructor
}

Rectangle::Rectangle(int newWidth, int newHeight) : Polygon(newWidth, newHeight) {
    // Parameterized constructor calls the Polygon constructor
}

int Rectangle::getArea() const {
    return width * height;  // Area of rectangle = width * height
}

void Rectangle::draw() const {
    // Draw the rectangle using '*' characters
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
