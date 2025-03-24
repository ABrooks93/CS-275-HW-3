//
// Created by alyss on 3/23/2025.
//
#ifndef POLYGON_H
#define POLYGON_H

class Polygon {
public:
    // Constructors
    Polygon();  // Default constructor
    Polygon(int newWidth, int newHeight);  // Parameterized constructor

    // Setters
    void setWidth(int newWidth);
    void setHeight(int newHeight);

    // Pure virtual functions
    virtual int getArea() const = 0;  // Pure virtual function for area calculation
    virtual void draw() const = 0;    // Pure virtual function for drawing the shape

protected:
    int width = 0;
    int height = 0;
};

#endif // POLYGON_H
