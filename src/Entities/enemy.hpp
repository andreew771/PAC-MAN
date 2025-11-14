#pragma once
#include <string>
#include <iostream>

class Enemy {
    std::string type;
    int dangerLevel;

public:
    Enemy(const std::string& t = "Ghost", int lvl = 1);
    Enemy(const Enemy& other);
    Enemy& operator=(const Enemy& other);
    bool operator==(const Enemy& other) const;

    std::string GetType() const;
    int GetDangerLevel() const;

    friend std::ostream& operator<<(std::ostream& out, const Enemy& e);
};

