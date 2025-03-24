//
// Created by alyssa on 3/23/2025.
//
#ifndef DOCTOR_H
#define DOCTOR_H

#include "Person.h"

class Doctor : public Person {
public:
    Doctor();
    Doctor(std::string first, std::string last, int day, int month, int year, std::string specialization, int licenseNumber);
    std::string getSpecialization() const;
    int getLicenseNumber() const;

protected:
    std::string specialization;
    int licenseNumber;
};

#endif // DOCTOR_H

