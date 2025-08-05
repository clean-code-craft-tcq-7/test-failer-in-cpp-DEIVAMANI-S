#ifndef MISALIGNED_H
#define MISALIGNED_H

#include <string>
#include <vector>

struct ColorPair {
    int pairNumber;
    std::string majorColor;
    std::string minorColor;
};

std::vector<ColorPair> generateColorPairs();
std::string formatColorPair(const ColorPair& pair);
std::string formatHeader();
void printColorMap();  // For integration use

#endif
