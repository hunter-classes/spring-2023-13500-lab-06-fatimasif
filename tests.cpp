#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"

// add your tests here

    // TASK B
TEST_CASE("shiftChar") {
    CHECK(shiftChar('A', 3) == 'D');
    CHECK(shiftChar('x', 4) == 'b');
    CHECK(shiftChar('Z', 1) == 'A');
    CHECK(shiftChar('5', 2) == '5');
    CHECK(shiftChar('!', 5) == '!');
}

TEST_CASE("encryptCaesar") {
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
    CHECK(encryptCaesar("The quick brown fox jumps over the lazy dog", 3) == "Wkh txlfn eurzq ira mxpsv ryhu wkh odcb grj");
}