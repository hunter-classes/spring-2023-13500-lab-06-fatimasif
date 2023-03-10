/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: decrypt.cpp, Lab-06

Implement two decryption functions corresponding to the above ciphers.
When decrypting ciphertext, ensure that the produced decrypted string is equal to the original plaintext:

decryptCaesar(ciphertext, rshift) == plaintext
decryptVigenere(ciphertext, keyword) == plaintext
Write a program decryption.cpp that uses the above functions to demonstrate encryption and decryption for both ciphers.

It should first ask the user to input plaintext, then ask for a right shift for 
the Caesar cipher and report the ciphertext and its subsequent decryption. After that, it should do the same for the Vigenere cipher.
*/

#include "vigenere.h"
#include "caesar.h"
#include "decrypt.h"
#include <iostream>
#include <string>
using namespace std;

string decryptCaesar(string ciphertext, int rshift) {   // takes in a string of ciphertext and an integer rshift as parameters and returns the plaintext after decrypting caesar cipher
    string plaintext;
    for (char c : ciphertext) { // iterates through each character 'c' in the ciphertext string
        if (isalpha(c)) {
            int lshift = 26 - (rshift % 26);    // if c is in alphabetical character then the function calculates the left shift
            plaintext += shiftChar(c, lshift);  // applies shift
        } else {
            plaintext += c; // if not alphabetical then simply appended to the plaintext string
        }
    }
    return plaintext;
}

string decryptVigenere(string ciphertext, string keyword) {
    string decrypted = "";
    int keylen = keyword.length();
    int j = 0; // index for the current letter in the keyword
        // iterates through each character 'c' on the ciphertext string
    for (char c : ciphertext) {
            // if in alphabetical character then the function calculates the right shift reqired to decrypt the character
        if (isalpha(c)) {
            int rshift = keyword[j] - 'a';  
            decrypted += shiftChar(c, -rshift);
            j = (j + 1) % keylen; // advance to the next letter in the keyword
        } else {
            decrypted += c;
        }
    }

    return decrypted;
}





