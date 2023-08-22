#pragma once

#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char* str;         // Pointer to the character array
    size_t length;    // Length of the string

public:
    // Default constructor
    String();

    // Constructor with custom size
    String(size_t size);

    // Constructor with initial string
    String(const char* initialStr);

    // Copy constructor
    String(const String& other);

    // Input method to get string from user
    void input();

    // Output method to display the string
    void output();
};
