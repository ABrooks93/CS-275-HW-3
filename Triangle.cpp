//
// Created by alyss on 3/23/2025.
//
#include "Triangle.h"
#include <iostream>

Triangle::Triangle() : Polygon() {
    // Default constructor calls the Polygon constructor
}

Triangle::Triangle(int newWidth, int newHeight) : Polygon(newWidth, newHeight) {
    // Parameterized constructor calls the Polygon constructor
}

int Triangle::getArea() const {
    return (width * height) / 2;  // Area of triangle = (width * height) / 2
}

void Triangle::draw() const {
    // Draw the triangle using '*' characters
    int numStars = 1;  // Start with one star at the apex

    for (int i = 1; i <= height; i++) {
        // Print leading spaces to center the stars
        int numSpaces = (height - i);
        for (int j = 0; j < numSpaces; j++) {
            std::cout << " ";
        }

        // Print stars
        for (int k = 0; k < numStars; k++) {
            std::cout << "*";
        }

        // Move to the next line
        std::cout << std::endl;

        // Increase the number of stars for the next row
        numStars += 2;
    }
}
