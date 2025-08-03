what will be the output of below c++ program
#include <iostream>
#include <assert.h>
#include <iomanip>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    std::cout << std::left << std::setw(12) << "Pair No.," << std::setw(10) << "Major" << std::setw(10) << "Minor" << "\n";
    std::cout << std::string(27, '-') << "\n";

    int pairNumber = 0;
    int i = 0, j = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            std::cout << std::setw(12) << pairNumber << std::setw(10) << majorColor[i] << std::setw(10) << minorColor[j] << "\n";
            ++pairNumber;
        }
    }
    return pairNumber;
}

void testPrintColorMap() {
    std::cout << "\nPrint color map test\n"; 
    int result = printColorMap();
    assert(result == 25);
    std::cout << "All is well (maybe!)\n";
}