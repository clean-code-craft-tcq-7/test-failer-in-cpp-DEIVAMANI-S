#include <iostream>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

void testTshirtSize() {
    std::cout << "\nTshirt size test\n";
    assert(size(37) == 'S');
    assert(size(37) == 'M');//Test case for 38 falling under size 'M'
    assert(size(40) == 'M');
    assert(size(42) == 'M');//Test case for 38 falling under size 'L'
    assert(size(43) == 'L');
    std::cout << "All is well (maybe!)\n";
}
