#include "TeamManager.h"

TeamManager::TeamManager() : count(0) {}

TeamManager::~TeamManager() {
    std::cout << "Destructor called: Clearing team data..." << std::endl;
}

void TeamManager::addTeam(const std::string& name, const std::string& city, int year, const std::string& coach) {
    if (count >= teams.size()) {
        std::cout << "Error: Maximum team capacity reached!" << std::endl;
        return;
    }
    if (year <= 0) {
        std::cout << "Error: Invalid year of foundation!" << std::endl;
        return;
    }
    teams[count++] = Team(name, city, year, coach);
}

void TeamManager::displayTeams() const {
    std::cout << "Teams:\n";
    for (int i = 0; i < count; ++i) {
        std::cout << "Name: " << teams[i].name << ", City: " << teams[i].city
            << ", Year: " << teams[i].year << ", Coach: " << teams[i].coach << std::endl;
    }
}

void TeamManager::displayTeamsFoundedAfter(int year) const {
    std::cout << "Teams founded after " << year << ":\n";
    bool found = false;
    for (int i = 0; i < count; ++i) {
        if (teams[i].year > year) {
            std::cout << "Name: " << teams[i].name << ", City: " << teams[i].city
                << ", Year: " << teams[i].year << ", Coach: " << teams[i].coach << std::endl;
            found = true;
        }
    }
    if (!found) {
        std::cout << "No teams found for this criteria." << std::endl;
    }
}
