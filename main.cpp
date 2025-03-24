*************************************************************************
    ** Author : Alyssa Brooks
    ** Program : hw3
    ** Date Created : 03/23/2025
    ** Date Last Modified : 03/23/2025
    ** Problem:  hw3
*****************************************************************************8
#include <iostream>
#include "Person.h"
#include "Pediatrician.h"
#include "Surgeon.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main() {
     // Create a Pediatrician object
    Pediatrician ped("Alice", "Green", 15, 7, 1980, "Pediatrics", 12345, 10);

    // Testing inherited functions from Person
    std::cout << "Pediatrician Name (Inherited from Person): " << ped.getName() << std::endl;
    std::cout << "Pediatrician Birthdate (Inherited from Person): " << ped.getBirthdate() << std::endl;

    // Testing functions specific to Paediatrician
    std::cout << "Pediatrician Specialization: " << ped.getSpecialization() << std::endl;
    std::cout << "Pediatrician License Number: " << ped.getLicenseNumber() << std::endl;
    std::cout << "Pediatrician Experience: " << ped.getExperienceYears() << " years" << std::endl;

    // Update the Paediatrician's experience and print the new value
    ped.setExperienceYears(12);
    std::cout << "Updated Pediatrician Experience: " << ped.getExperienceYears() << " years" << std::endl;

    // Create a Surgeon object
    Surgeon surg("John", "Smith", 20, 2, 1975, "Surgery", 67890, "Cardiac", 200);

    // Testing inherited functions from Person
    std::cout << "\nSurgeon Name (Inherited from Person): " << surg.getName() << std::endl;
    std::cout << "Surgeon Birthdate (Inherited from Person): " << surg.getBirthdate() << std::endl;

    // Testing functions specific to Surgeon
    std::cout << "Surgeon Specialization: " << surg.getSpecialization() << std::endl;
    std::cout << "Surgeon License Number: " << surg.getLicenseNumber() << std::endl;
    std::cout << "Surgeon Surgery Type: " << surg.getSurgeryType() << std::endl;
    std::cout << "Surgeon Surgeries Performed: " << surg.getNumSurgeriesPerformed() << std::endl;

    // Update the Surgeon's number of surgeries and surgery type, then print the new values
    surg.setSurgeryType("Orthopedic");
    surg.setNumSurgeriesPerformed(250);
    std::cout << "Updated Surgeon Surgery Type: " << surg.getSurgeryType() << std::endl;
    std::cout << "Updated Surgeon Surgeries Performed: " << surg.getNumSurgeriesPerformed() << std::endl;

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
