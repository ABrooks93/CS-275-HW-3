//
// Created by alyss on 3/23/2025.
//
#include "Doctor.h"

Doctor::Doctor() : Person() {
    specialization = "";
    licenseNumber = 0;
}

Doctor::Doctor(std::string first, std::string last, int day, int month, int year, std::string spec, int license)
    : Person(first, last, day, month, year) {
    specialization = spec;
    licenseNumber = license;
}

std::string Doctor::getSpecialization() const {
    return specialization;
}

int Doctor::getLicenseNumber() const {
    return licenseNumber;
}
