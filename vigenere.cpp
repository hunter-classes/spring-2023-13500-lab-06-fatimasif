/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: vigenere.cpp, Lab-06

Write a program vigenere.cpp. It should contain a function encryptVigenere implementing this cipher:

string encryptVigenere(string plaintext, string keyword);
You may assume that the keyword contains only lowercase alphabetic characters a - z.

The main should implement a testing interface similar to the one in Task B, 
the user enters the plaintext and the keyword, and the program reports the ciphertext.
*/

#include "vigenere.h"
#include "caesar.h"
#include <iostream>
#include <string>
using namespace std;

// Vigenere cipher encryption
string encryptVigenere(string plaintext, string keyword) {  // take in two arguments
    string ciphertext;  // string to encrypt the plaintext 
    int keylen = keyword.length();  // determining the length of the keyword 
    int j = 0; // index for the current letter in the keyword

    for (char c : plaintext) {  // loops through each character 
        if (isalpha(c)) {   // if it is alphabetic then the function determines the shift amount
            int rshift = keyword[j] - 'a';  // subtracts character code for 'a' from the character code for the current letter of the keyword
            ciphertext += shiftChar(c, rshift); // calling helper function shiftChar with the current character and calculated shift
            j = (j + 1) % keylen; // advance to the next letter in the keyword
        } else {
            ciphertext += c;    // if not alphabetic then it is appended to the string without being encripted
        }
    }

    return ciphertext;  // returning the string
}