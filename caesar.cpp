/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: caesar.cpp, Lab-06

Write a program caesar.cpp with functions implementing Caesar cipher encryption:

The argument rshift is the magnitude of the right shift. 
For the sake of the lab, you may assume it to be in the range 0 ≤ rshift ≤ 25 (although, implementing it correctly for an 
arbitrary integer shift is also possible, of course).

Your functions should preserve case, and any non-alphabetic characters should be left unchanged. For example,
encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!"
Feel free to write more additional helper functions when you need them.

The main function should ask the user to input a plaintext sentence, then enter the right shift, 
and report the ciphertext computed using your encryption function.
*/


#include "caesar.h"
#include <iostream>
#include <string> 
using namespace std;

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift) {
        // check if the character is an alphabetic letter
    if (isalpha(c)) {
            // determine the offset for uppercase and lowercase letters
        int offset = isupper(c) ? 'A' : 'a';
            // apply the shift and wrap around the alphabet
        c = (c - offset + rshift) % 26 + offset;
    }
    return c;
}

// Caesar cipher encryption
string encryptCaesar(string plaintext, int rshift) {
    string ciphertext = "";
        // shift each character in the plaintext string
    for (char c : plaintext) {
        ciphertext += shiftChar(c, rshift);
    }
    return ciphertext;
}