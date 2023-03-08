#pragma once

// add prototypes here

#ifndef CAESAR_H
#define CAESAR_H

using namespace std;
#include <string>

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift);

// Caesar cipher encryption
string encryptCaesar(string plaintext, int rshift);

#endif