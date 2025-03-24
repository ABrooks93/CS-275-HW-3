//
// Created by alyss on 3/23/2025.
//
#include "Pediatrician.h"

Pediatrician::Pediatrician() : Doctor() {
    experienceYears = 0;
}

Pediatrician::Pediatrician(std::string first, std::string last, int day, int month, int year, std::string specialization, int license, int experience)
    : Doctor(first, last, day, month, year, specialization, license) {
    experienceYears = experience;
}

int Pediatrician::getExperienceYears() const {
    return experienceYears;
}

void Paediatrician::setExperienceYears(int experienceYears) {
    this->experienceYears = experienceYears;
}
