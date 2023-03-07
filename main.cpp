#include <iostream>
#include <string> 
#include <cctype>

#include "funcs.h"
#include "caesar.h"
using namespace std;

int main()
{
  // TASK B
  string plaintext = "Hello, World!";
  int rshift = 10;
  string ciphertext = encryptCaesar(plaintext, rshift);
  cout << "Plaintext : " << plaintext << endl;
  cout << "Ciphertext: " << ciphertext << endl;



  return 0;
}
