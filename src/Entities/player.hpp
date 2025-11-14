#pragma once
#include <string>
#include <iostream>

class Player {
    std::string name;
    int score;

public:
    Player(const std::string& n = "Pacman", int s = 0);
    Player(const Player& other);

    Player& operator=(const Player& other);
    bool operator==(const Player& other) const;

    void AddScore(int value);
    int GetScore() const;
    std::string GetName() const;

    friend std::istream& operator>>(std::istream& in, Player& p);
    friend std::ostream& operator<<(std::ostream& out, const Player& p);
};

