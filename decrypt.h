#pragma once

// add prototypes here

#ifndef DECRYPT_H
#define DECRYPT_H

using namespace std;
#include <string>

string decryptCaesar(string ciphertext, int rshift);

string decryptVigenere(string ciphertext, string keyword);

#endif