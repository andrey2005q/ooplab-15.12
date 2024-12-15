#include <iostream>
#include "TeamManager.h"

int main() {
    TeamManager manager;

    // Add teams
    manager.addTeam("Dynamo", "Kyiv", 1927, "Mircea Lucescu");
    manager.addTeam("Shakhtar", "Donetsk", 1936, "Igor Jovicevic");
    manager.addTeam("Karpaty", "Lviv", 1963, "Andriy Tlumak");

    // Display all teams
    std::cout << "\nAll Teams:\n";
    manager.displayTeams();

    // Display teams founded after a specific year
    int year;
    std::cout << "\nEnter a year to find teams founded after that year: ";
    std::cin >> year;
    manager.displayTeamsFoundedAfter(year);

    return 0;
