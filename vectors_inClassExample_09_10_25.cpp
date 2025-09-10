//
// Created by ksilv on 9/10/2025.
//

#include <iostream>
#include <vector>
using namespace std;

// initialize main function
int main() {

    // Initialize vector of arbitrary size
    vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // Print values of each index
    // Unlike the usual approach where you would use index notation
    // (numbers[i]). We use methods associated with the vector class
    // to get our desired values...
    cout << "First Element: " << numbers.front() << endl;
    cout << "Second Element: " << numbers.at(1) << endl;
    cout << "Third Element: " << numbers.at(2) << endl;
    cout << "Last Element: " << numbers.back() << endl;

    // We will now assign new values to our vector using methods
    numbers[1] = 35; // Should replace 30 with 5
    numbers.at(2) = 35; // Should replace index 2's value with 35
    numbers.front() = 5; // Should replace the initial element with 5
    numbers.push_back(272);

    // Using a for-loop, print the vector with the new values

    for (int i = 0; i < numbers.size(); i++) {

        cout << "\nIndex " << i << ": " << numbers[i] << endl;

    }

    return 0;
}