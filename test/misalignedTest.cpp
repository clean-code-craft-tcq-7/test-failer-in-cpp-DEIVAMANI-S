#include <cassert>
#include <iostream>
#include "../src/misaligned.h"

void testColorMapData() {
    auto pairs = generateColorPairs();
    assert(pairs.size() == 25);
    assert(pairs[0].majorColor == "White");
    assert(pairs[0].minorColor == "Blue");
    assert(pairs[24].majorColor == "Violet");
    assert(pairs[24].minorColor == "Slate");
}

void testColorMapFormatting() {
    ColorPair pair = {1, "White", "Blue"};
    std::string expected = "1           |White     |Blue      ";
    std::string actual = formatColorPair(pair);
    assert(actual == expected);

    std::string header = formatHeader();
    std::string expectedHeader = "PairNumber  |Major     |Minor     ";
    assert(header == expectedHeader);
}

void testPrintColorMap() {
    std::cout << "Running Color Map Tests...\n";
    testColorMapData();
    testColorMapFormatting();
    std::cout << "All unit tests passed!\n";
}