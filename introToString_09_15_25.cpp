//
// Created by ksilv on 9/15/2025.
//
// In class example introducing the String
// class and its use-cases

#include <iostream>

using namespace std;

// declare main funtion
int main() {

    // Declare necessary variables
    string firstName;
    string lastName;

    // Ask user to enter their first and last name
    // using the console
    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "\nEnter your last name: ";
    cin >> lastName;

    // Print full name in the console
    string fullName = firstName + " " + lastName;
    cout << "Full name: " << fullName << endl;

    return 0;



}

