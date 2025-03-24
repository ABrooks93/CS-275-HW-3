//
// Created by alyss on 3/23/2025.
//
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Polygon.h"

class Triangle : public Polygon {
public:
    Triangle();  // Default constructor
    Triangle(int newWidth, int newHeight);  // Parameterized constructor

    // Override pure virtual functions
    int getArea() const override;
    void draw() const override;
};

#endif // TRIANGLE_H
