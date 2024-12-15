#include "LiquidPackaging.h"

// LiquidPackaging implementation
LiquidPackaging::LiquidPackaging(const std::string& type, int quantity, double volume)
    : Packaging(type, quantity), volume(volume) {}

void LiquidPackaging::saveToFile(std::ofstream& outFile) const {
    Packaging::saveToFile(outFile);
    outFile << volume << '\n';
}

void LiquidPackaging::loadFromFile(std::ifstream& inFile) {
    Packaging::loadFromFile(inFile);
    inFile >> volume;
    inFile.ignore(); // Ignore newline
}

void LiquidPackaging::display() const {
    Packaging::display();
    std::cout << "Volume: " << volume << " liters" << std::endl;
}
