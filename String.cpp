#include "String.h"

// Default constructor
String::String()
{
    length = 80;  // Default length
    str = new char[length + 1];  // Allocate memory for the string
    str[length] = '\0';  // Null-terminate the string
}

// Constructor with custom size
String::String(size_t size)
{
    length = size;  // Set the provided length
    str = new char[length + 1];  // Allocate memory for the string
    str[length] = '\0';  // Null-terminate the string
}

// Constructor with initial char array
String::String(const char* initialStr)
{
    length = strlen(initialStr);  // Calculate length of initialStr
    str = new char[length + 1];  // Allocate memory for the string
    strcpy_s(str, length + 1, initialStr);  // Copy initialStr into the new memory
}

// Copy constructor
String::String(const String& other)
{
    length = other.length;  // Copy length from the other object
    str = new char[length + 1];  // Allocate memory for the string
    strcpy_s(str, length + 1, other.str);  // Copy contents from the other object
}

// Input function to read a string from the user
void String::input()
{
    cout << "Enter a string: ";
    cin.getline(str, length + 1);  // Read a line of input
}

// Output function to print the string
void String::output()
{
    cout << str << endl;  // Print the string
}
