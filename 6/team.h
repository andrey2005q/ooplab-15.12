#pragma once
#ifndef TEAM_H
#define TEAM_H

#include <string>

struct Team {
    std::string name;
    std::string city;
    int year;
    std::string coach;

    Team(std::string n = "", std::string c = "", int y = 0, std::string co = "");
};

#endif // TEAM_H
