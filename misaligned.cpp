#include <iostream>
#include <assert.h>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    int pairNumber = 0;
    int i = 0, j = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            std::cout << pairNumber << " | " << majorColor[i] << " | " << minorColor[j] << "\n";
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