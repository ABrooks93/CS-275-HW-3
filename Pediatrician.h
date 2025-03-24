//
// Created by alyss on 3/23/2025.
//
#ifndef PAEDIATRICIAN_H
#define PAEDIATRICIAN_H

#include "Doctor.h"

class Pediatrician : public Doctor {
public:
    Pediatrician();
    Pediatrician(std::string first, std::string last, int day, int month, int year, std::string specialization, int license, int experienceYears);
    int getExperienceYears() const;
    void setExperienceYears(int experienceYears);

private:
    int experienceYears;
};

#endif // PEDIATRICIAN_H
