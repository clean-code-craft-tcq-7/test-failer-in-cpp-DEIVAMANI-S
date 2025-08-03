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
    assert(pairs[1].first == "White");
    assert(pairs[1].second == "Orange");
    assert(pairs[2].first == "White");
    assert(pairs[2].second == "Green");
    assert(pairs[3].first == "White");
    assert(pairs[3].second == "Brown");
    assert(pairs[4].first == "White");
    assert(pairs[4].second == "Slate");

    assert(pairs[5].first == "Red");
    assert(pairs[5].second == "Blue");
    assert(pairs[6].first == "Red");
    assert(pairs[6].second == "Orange");
    assert(pairs[7].first == "Red");
    assert(pairs[7].second == "Green");
    assert(pairs[8].first == "Red");
    assert(pairs[8].second == "Brown");
    assert(pairs[9].first == "Red");
    assert(pairs[9].second == "Slate");

    assert(pairs[10].first == "Black");
    assert(pairs[10].second == "Blue");
    assert(pairs[11].first == "Black");
    assert(pairs[11].second == "Orange");
    assert(pairs[12].first == "Black");
    assert(pairs[12].second == "Green");
    assert(pairs[13].first == "Black");
    assert(pairs[13].second == "Brown");
    assert(pairs[14].first == "Black");
    assert(pairs[14].second == "Slate");

    assert(pairs[15].first == "Yellow");
    assert(pairs[15].second == "Blue");
    assert(pairs[16].first == "Yellow");
    assert(pairs[16].second == "Orange");
    assert(pairs[17].first == "Yellow");
    assert(pairs[17].second == "Green");
    assert(pairs[18].first == "Yellow");
    assert(pairs[18].second == "Brown");
    assert(pairs[19].first == "Yellow");
    assert(pairs[19].second == "Slate");

    assert(pairs[20].first == "Violet");
    assert(pairs[20].second == "Blue");
    assert(pairs[21].first == "Violet");
    assert(pairs[21].second == "Orange");
    assert(pairs[22].first == "Violet");
    assert(pairs[22].second == "Green");
    assert(pairs[23].first == "Violet");
    assert(pairs[23].second == "Brown");
    // assert(pairs[24].first == "Violet");
    // assert(pairs[24].second == "Slate");
    assert(pairs[24].first == "Violet");
    assert(pairs[24].second == "Yellow");

    std::cout << "All color pair tests passed!\n";
}

void testPrintColorMap() {
    std::cout << "Print color map test\n";

    std::vector<std::pair<std::string, std::string>> pairs = generateColorPairs();
    printColorPairs(pairs);
    testGenerateColorPairs();
}