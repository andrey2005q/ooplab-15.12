#include "BoxPackaging.h"
#include "LiquidPackaging.h"
#include <fstream>
#include <vector>

int main() {
    try {
        // Create instances of packaging
        std::vector<Packaging*> packages;
        packages.push_back(new BoxPackaging("Box", 10, "Cardboard"));
        packages.push_back(new LiquidPackaging("Liquid", 5, 20.5));

        // Save data to file
        std::ofstream outFile("packaging_data.txt");
        if (!outFile) {
            throw std::ios_base::failure("Error opening file for writing");
        }

        for (const auto& package : packages) {
            package->saveToFile(outFile);
        }
        outFile.close();

        // Load data from file
        std::ifstream inFile("packaging_data.txt");
        if (!inFile) {
            throw std::ios_base::failure("Error opening file for reading");
        }

Андрій, [16.12.2024 0:07]
std::vector<Packaging*> loadedPackages;
        while (!inFile.eof()) {
            std::string type;
            std::getline(inFile, type);
            if (type == "Box") {
                BoxPackaging* box = new BoxPackaging("", 0, "");
                box->loadFromFile(inFile);
                loadedPackages.push_back(box);
            } else if (type == "Liquid") {
                LiquidPackaging* liquid = new LiquidPackaging("", 0, 0.0);
                liquid->loadFromFile(inFile);
                loadedPackages.push_back(liquid);
            }
        }
        inFile.close();

        // Display loaded data
        for (const auto& package : loadedPackages) {
            package->display();
            delete package;
        }

        // Clean up
        for (const auto& package : packages) {
            delete package;
        }

    } catch (const std::exception& e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }

    return 0;
}
}
