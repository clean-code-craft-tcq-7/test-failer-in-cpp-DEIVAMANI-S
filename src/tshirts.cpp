#include <iostream>
#include <assert.h>
#include "tshirts.h"

constexpr int MEDIUM_LOWER_LIMIT = 38;
constexpr int LARGE_LOWER_LIMIT = 42;

char getTshirtSize(int shoulderWidthIncms) {
    if(shoulderWidthIncms < MEDIUM_LOWER_LIMIT) {
        return 'S';
    } else if(shoulderWidthIncms < LARGE_LOWER_LIMIT) {
        return 'M';
    } else {
        return 'L';
    }
}