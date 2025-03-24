//
// Created by alyss on 3/23/2025.
//
#include "Polygon.h"

Polygon::Polygon() {
    // Default constructor, initializes width and height to 0.
}

Polygon::Polygon(int newWidth, int newHeight) {
    width = newWidth;
    height = newHeight;
}

void Polygon::setWidth(int newWidth) {
    width = newWidth;
}

void Polygon::setHeight(int newHeight) {
    height = newHeight;
}
