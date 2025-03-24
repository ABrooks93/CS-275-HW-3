//
// Created by alyss on 3/23/2025.
//
#ifndef SURGEON_H
#define SURGEON_H

#include "Doctor.h"

class Surgeon : public Doctor {
public:
    Surgeon();
    Surgeon(std::string first, std::string last, int day, int month, int year, std::string specialization, int license, std::string surgeryType, int numSurgeries);
    std::string getSurgeryType() const;
    int getNumSurgeriesPerformed() const;
    void setSurgeryType(std::string surgeryType);
    void setNumSurgeriesPerformed(int numSurgeries);

private:
    std::string surgeryType;
    int numSurgeriesPerformed;
};

#endif // SURGEON_H
