#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <iomanip>

// Function for colour pair generation
std::vector<std::pair<std::string, std::string>> generateColorPairs() {
    // Declare major and minor color lists
    std::vector<std::string> majorColors = {"White", "Red", "Black", "Yellow", "Violet"};
    std::vector<std::string> minorColors = {"Blue", "Orange", "Green", "Brown", "Slate"};

    std::vector<std::pair<std::string, std::string>> colorPairs;

    // Create all combinations
    for (size_t i = 0; i < majorColors.size(); ++i) {
        for (size_t j = 0; j < minorColors.size(); ++j) {
            colorPairs.push_back(std::make_pair(majorColors[i], minorColors[j]));
        }
    }

    return colorPairs;
}

// Function to print the color pairs
void printColorPairs(const std::vector<std::pair<std::string, std::string>>& pairs) {
    std::cout << std::left << std::setw(12) << "Pair No." << std::setw(10) << "Major" << std::setw(10) << "Minor" << "\n";
    std::cout << std::string(27, '-') << "\n";

    for (size_t i = 0; i < pairs.size(); ++i) {
        std::cout << std::setw(12) << i << std::setw(10) << pairs[i].first << std::setw(10) << pairs[i].second  << "\n";
    }
}

// Function to test that the pairs were generated correctly
void testGenerateColorPairs() {
    std::vector<std::pair<std::string, std::string>> pairs = generateColorPairs();

    // Test case to check the size
    assert(pairs.size() == 25);

    // Test case to check the possible combinations
    assert(pairs[0].first == "White");
    assert(pairs[0].second == "Blue");
    assert(pairs[24].first == "Violet");
    assert(pairs[24].second == "Slate");

    std::cout << "All color pair tests passed!\n";
}

int testPrintColorMap() {
    std::cout << "Print color map test\n";

    std::vector<std::pair<std::string, std::string>> pairs = generateColorPairs();
    printColorPairs(pairs);
    testGenerateColorPairs();
}