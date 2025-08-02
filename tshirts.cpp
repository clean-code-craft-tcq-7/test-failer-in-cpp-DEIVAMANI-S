#include <iostream>
#include <assert.h>

// T-shirt size boundaries
constexpr int MEDIUM_LOWER_LIMIT = 38;
constexpr int LARGE_LOWER_LIMIT = 42;

char getTshirtSize(int shoulderWidthIncms) {
    char sizeName = '\0';
    if(shoulderWidthIncms < MEDIUM_LOWER_LIMIT) {
        sizeName = 'S';
    } else if(shoulderWidthIncms < LARGE_LOWER_LIMIT) {
        sizeName = 'M';
    } else {
        sizeName = 'L';
    }
    return sizeName;
}

void testTshirtSize() {
    std::cout << "\nTshirt size test\n";
    assert(getTshirtSize(37) == 'S');
    assert(getTshirtSize(38) == 'M');
    assert(getTshirtSize(40) == 'M');
    assert(getTshirtSize(43) == 'L');
    std::cout << "All is well (maybe!)\n";
}