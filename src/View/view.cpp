#include "view.hpp"

void View::DrawImage(const Point& tl, const Point& br,
                     const std::vector<std::string>& image) {
    std::cout << "Image from " << tl << " to " << br << '\n';
    for (const auto &row : image) std::cout << row << '\n';
}

void View::WriteText(const Point& pos, const std::string& text) {
    std::cout << "Text at " << pos << ": " << text << '\n';
}

void View::Draw(const Point& pos, char symbol) {
    std::cout << symbol << " at " << pos << '\n';
}
