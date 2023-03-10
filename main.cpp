#include <iostream>
#include <string> 
#include <cctype>

#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

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

  cout << "\n" << endl;

  // TASK D
    // Caesar cipher encryption
  cout << "TASK D" << endl;
  cout << "= Caesar =\n";
  cout << "Shift: " << rshift << "\n";

    // Decrypt Caesar
  string ciphertext3 = "Rovvy, Gybvn!";
  string plaintext3 = decryptCaesar(ciphertext3, rshift);
  cout << "Ciphertext: " << ciphertext << endl;
  cout << "Decrypted: " << plaintext3 << endl;

  cout << "\n" << endl;

    // Vigenere cipher encryption
  string keyword2 = "cake";
  ciphertext3 = encryptVigenere(plaintext3, keyword2);
  cout << "= Vigenere =\n";
  cout << "Keyword: " << keyword2 << "\n";
  cout << "Ciphertext: " << ciphertext3 << "\n";
  cout << "Decrypted: " << decryptVigenere(ciphertext3, keyword2) << "\n";

  return 0;
}
