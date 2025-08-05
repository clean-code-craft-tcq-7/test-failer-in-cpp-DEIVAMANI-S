#include <assert.h>
#include <iostream>
#include "../src/tshirts.h"

void testTshirtSize() {
    std::cout << "Running Tshirt size unit tests...\n";
    assert(getTshirtSize(37) == 'S');
    assert(getTshirtSize(38) == 'M');
    assert(getTshirtSize(40) == 'M');
    assert(getTshirtSize(43) == 'L');
    std::cout << "All unit tests passed!\n";
}