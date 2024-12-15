#ifndef PACKAGING_H
#define PACKAGING_H

#include <iostream>
#include <fstream>
#include <string>

class Packaging {
protected:
    std::string type;
    int quantity;

public:
    Packaging(const std::string& type, int quantity);
    virtual ~Packaging();

    virtual void saveToFile(std::ofstream& outFile) const;
    virtual void loadFromFile(std::ifstream& inFile);
    virtual void display() const;

    bool operator==(const Packaging& other) const;
};

#endif
