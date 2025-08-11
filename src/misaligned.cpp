#include "../src/misaligned.h"

#include <iostream>
#include <sstream>
#include <iomanip>

std::vector<ColorPair> generateColorPairs() {
    const char* major[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    std::vector<ColorPair> pairs;
    int pairNumber = 1;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            pairs.push_back({pairNumber++, major[i], minor[j]});
        }
    }

    return pairs;
}

std::string formatHeader() {
    std::ostringstream oss;
    oss << std::left << std::setw(12) << "PairNumber" 
        << "|" << std::setw(10) << "Major" 
        << "|" << std::setw(10) << "Minor";
    return oss.str();
}

std::string formatColorPair(const ColorPair& pair) {
    std::ostringstream oss;
    oss << std::left << std::setw(12) << pair.pairNumber
        << "|" << std::setw(10) << pair.majorColor
        << "|" << std::setw(10) << pair.minorColor;
    return oss.str();
}

void printColorMap() {
    std::cout << formatHeader() << "\n";
    std::cout << std::string(35, '-') << "\n";

    auto pairs = generateColorPairs();
    for (const auto& pair : pairs) {
        std::cout << formatColorPair(pair) << "\n";
    }
}
