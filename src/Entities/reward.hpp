#pragma once
#include <string>
#include <iostream>

class Reward {
    std::string name;
    int value;

public:
    Reward(const std::string& n = "Cherry", int v = 10);
    Reward(const Reward& other);
    Reward& operator=(const Reward& other);
    bool operator==(const Reward& other) const;

    int GetValue() const;
    std::string GetName() const;

    friend std::ostream& operator<<(std::ostream& out, const Reward& r);
};
