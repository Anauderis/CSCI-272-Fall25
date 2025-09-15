//
// Created by ksilv on 9/15/2025.
//

#include <iostream>
using namespace std;

bool caseInsensitiveCompare(const string &str1, const string &str2) {

    if (str1.length() != str2.length()) return false;

    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i]) return false;
    }
    return true;
}

int main() {
    string str1 = "Hello";
    string str2 = "hello";

    if (caseInsensitiveCompare(str1, str2)) {

        cout << "Strings are case-insensitive equal" << endl;

    } else {

        cout << "Strings are NOT insensitive equal" << endl;

    }
}