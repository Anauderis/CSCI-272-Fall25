//
// Created by ksilv on 9/29/2025.
//

// This is an in-class example of classes

#include <iostream>
using namespace std;

class Vehicle {
    public:

        string brand;
        string model;
        int year;

        void startEngine() {
            cout << "Engine started for: " << year << " "  << brand << " " << model << endl;
        }

        void accelerator() {
            cout << "Accelerator started for: " << year << " " << brand << " " << model << endl;
        }

};

// declare main function
int main() {
    Vehicle v;

    v.brand = "Honda";
    v.model = "CIVIC";
    v.year = 2018;

    v.startEngine();
    v.accelerator();

}
