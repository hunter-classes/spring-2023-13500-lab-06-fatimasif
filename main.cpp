#include <iostream>
#include <string> 
#include <cctype>

#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"

using namespace std;

int main()
{
  // TASK B
  cout << "TASK B" << endl;
  string plaintext = "Hello, World!";
  int rshift = 10;
  string ciphertext = encryptCaesar(plaintext, rshift);
  cout << "Plaintext : " << plaintext << endl;
  cout << "Ciphertext: " << ciphertext << endl;

  cout << "\n" << endl;

  // TASK C
  cout << "TASK C" << endl;
  string plaintext2 = "Hello, World!";
  string keyword = "cake";
  string ciphertext2 = encryptVigenere(plaintext2, keyword);
  cout << "Ciphertext: " << ciphertext2 << endl;

  return 0;
}
