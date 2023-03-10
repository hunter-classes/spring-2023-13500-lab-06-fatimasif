#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

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

// TASK C
TEST_CASE("Encrypt Vigenere") {
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
}

// TASK D
TEST_CASE("Decrypt Caesar") {
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
}

TEST_CASE("Decrypt Vigenere") {
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
}
