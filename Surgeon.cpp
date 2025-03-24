//
// Created by alyss on 3/23/2025.
//
#include "Surgeon.h"

Surgeon::Surgeon() : Doctor() {
    surgeryType = "";
    numSurgeriesPerformed = 0;
}

Surgeon::Surgeon(std::string first, std::string last, int day, int month, int year, std::string specialization, int license, std::string type, int numSurgeries)
    : Doctor(first, last, day, month, year, specialization, license) {
    surgeryType = type;
    numSurgeriesPerformed = numSurgeries;
}

std::string Surgeon::getSurgeryType() const {
    return surgeryType;
}

int Surgeon::getNumSurgeriesPerformed() const {
    return numSurgeriesPerformed;
}

void Surgeon::setSurgeryType(std::string type) {
    surgeryType = type;
}

void Surgeon::setNumSurgeriesPerformed(int numSurgeries) {
    numSurgeriesPerformed = numSurgeries;
}
