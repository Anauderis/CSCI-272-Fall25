//
// Created by ksilv on 9/15/2025.
//

#include <iostream>
using namespace std;

int main() {

    string message = "Hello World!";

    // Use the .length() and .size() method
    int messageLength = message.length();
    int messageSize = message.size();

    // Print the values to the console
    cout << "message: " << message << "\nLength: " << messageLength << "\nSize: " << messageSize << endl;

    // Since strings are an array of characters, we can use array-based methods to get a character at any index
    char firstChar = message[0];
    char lastChar = message[messageLength - 1];

    // Print the values to the console
    cout << "First char: " << firstChar << "\nLast char: " << lastChar << endl;

    return 0;
}