#include "BoxPackaging.h"

// BoxPackaging implementation
BoxPackaging::BoxPackaging(const std::string& type, int quantity, const std::string& material)
    : Packaging(type, quantity), boxMaterial(material) {}

void BoxPackaging::saveToFile(std::ofstream& outFile) const {
    Packaging::saveToFile(outFile);
    outFile << boxMaterial << '\n';
}

void BoxPackaging::loadFromFile(std::ifstream& inFile) {
    Packaging::loadFromFile(inFile);
    std::getline(inFile, boxMaterial);
}

void BoxPackaging::display() const {
    Packaging::display();
    std::cout << "Material: " << boxMaterial << std::endl;
}
