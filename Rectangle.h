//
// Created by alyss on 3/23/2025.
//
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygon.h"

class Rectangle : public Polygon {
public:
    Rectangle();  // Default constructor
    Rectangle(int newWidth, int newHeight);  // Parameterized constructor

    // Override pure virtual functions
    int getArea() const override;
    void draw() const override;
};

#endif // RECTANGLE_H
