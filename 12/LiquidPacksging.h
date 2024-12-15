#pragma once
#ifndef LIQUIDPACKAGING_H
#define LIQUIDPACKAGING_H

#include "Packaging.h"

class LiquidPackaging : public Packaging {
private:
    double volume;

public:
    LiquidPackaging(const std::string& type, int quantity, double volume);
    void saveToFile(std::ofstream& outFile) const override;
    void loadFromFile(std::ifstream& inFile) override;
    void display() const override;
};

#endif
