#pragma once
#ifndef TEAMMANAGER_H
#define TEAMMANAGER_H

#include <array>
#include <string>
#include <iostream>
#include "Team.h"

class TeamManager {
private:
    std::array<Team, 10> teams;
    int count;

public:
    TeamManager();
    ~TeamManager();

    void addTeam(const std::string& name, const std::string& city, int year, const std::string& coach);
    void displayTeams() const;
    void displayTeamsFoundedAfter(int year) const;
};

#endif
