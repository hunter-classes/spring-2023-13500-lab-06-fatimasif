/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: test-ascii.cpp, Lab-06

Write a program test-ascii.cpp that asks the user to input a line of text 
(which may possibly include spaces). 
The program should report all characters from the input line together with their ASCII codes.

Make sure to print exactly one space between the character and it’s code.
*/

#include <iostream>
#include <cctype>
// #include "funcs.h"

int main() {
    std::string input = "Cat :3 Dog"; // initializing string variable with hardcoded input
    for (char c : input) {  // iterates through each character 'c' in the string 'input'
        std::cout << c << " " << (int)c << std::endl;   // prints the character 'c' followed by a space, followed by the integer value of c (ASCII code)
    }
    return 0;
}

