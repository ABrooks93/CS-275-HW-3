#include <iostream>
#include "Person.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main() {
    // Create a Rectangle object
    Rectangle rect(5, 9);
    std::cout << "Rectangle Area: " << rect.getArea() << std::endl;
    std::cout << "Rectangle Drawing:" << std::endl;
    rect.draw();

    // Create a Triangle object
    Triangle tri(10, 5);
    std::cout << "Triangle Area: " << tri.getArea() << std::endl;
    std::cout << "Triangle Drawing:" << std::endl;
    tri.draw();

    // Change the width and height of both objects
    rect.setWidth(7);
    rect.setHeight(4);
    std::cout << "\nUpdated Rectangle Area: " << rect.getArea() << std::endl;
    std::cout << "Updated Rectangle Drawing:" << std::endl;
    rect.draw();

    tri.setWidth(12);
    tri.setHeight(6);
    std::cout << "\nUpdated Triangle Area: " << tri.getArea() << std::endl;
    std::cout << "Updated Triangle Drawing:" << std::endl;
    tri.draw();

    return 0;
}
