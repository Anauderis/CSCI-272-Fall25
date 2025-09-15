//
// Created by ksilv on 9/15/2025.
//

#include <iostream>
using namespace std;

int main() {

    string str1 = "apple";
    string str2 = "banana";

    // print values to console
    cout << "str1: " << str1 << "\nstr2: " << str2 << endl;

    if (str1 == str2) {
        cout << str1 << " is equal to " << str2 << endl;
    } else if (str1 < str2) {
        cout << str1 << " is less than " << str2 << endl;
    } else {
        cout << str1 << " is greater than " << str2 << endl;
    }

    return 0;
}