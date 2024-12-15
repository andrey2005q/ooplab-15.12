#include "Packaging.h"

// Base class implementation
Packaging::Packaging(const std::string& type, int quantity) : type(type), quantity(quantity) {}

Packaging::~Packaging() {}

void Packaging::saveToFile(std::ofstream& outFile) const {
    outFile << type << '\n' << quantity << '\n';
}

void Packaging::loadFromFile(std::ifstream& inFile) {
    std::getline(inFile, type);
    inFile >> quantity;
    inFile.ignore(); // Ignore newline
}

bool Packaging::operator==(const Packaging& other) const {
    return type == other.type && quantity == other.quantity;
}

void Packaging::display() const {
    std::cout << "Type: " << type << ", Quantity: " << quantity << std::endl;
}
