#include "reward.hpp"

Reward::Reward() : _position{3,3} {}  

Reward::Reward(const Point& pos) : _position(pos) {} 

Point Reward::GetPosition() const { 
    return _position; 
}
