#include <string>
#include <iostream>

class Obstacle {
private:
    int x;
    int y;
    int damage;
    std::string type;

public:
    Obstacle(int x, int y, int damage, const std::string& type);

    int getX() const;
    int getY() const;
    int getDamage() const;
    std::string getType() const;

    void print() const;
};