//
// Created by ksilv on 9/29/2025.
//

#ifndef CSCI_272_PERSON_H
#define CSCI_272_PERSON_H

#include <string>
#include <iostream>
using namespace std;

class Person {
public:
        string name;
        int age;

        void introduce() {
                cout << "Hello, my name is " << name
                << " and I am " << age << " years old." << endl;
        }
};

#endif //CSCI_272_PERSON_H