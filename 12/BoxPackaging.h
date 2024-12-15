#ifndef BOXPACKAGING_H
#define BOXPACKAGING_H

#include "Packaging.h"

class BoxPackaging : public Packaging {
private:
    std::string boxMaterial;

public:
    BoxPackaging(const std::string& type, int quantity, const std::string& material);
    void saveToFile(std::ofstream& outFile) const override;
    void loadFromFile(std::ifstream& inFile) override;
    void display() const override;
};
