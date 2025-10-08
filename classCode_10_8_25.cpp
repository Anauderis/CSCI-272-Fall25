//
// Created by ksilv on 10/8/2025.
//

// Streams

#include <iostream>
#include <iomanip>
using namespace std;

// int main() {
//
//     int number;
//
//     cout << "Enter a number: " << endl;
//     cin >> number;
//     cout << "You entered: " << number << endl;
//
//     cerr << "This is an error message!\n";
//     clog << "This is a log message!\n";
//
//     return 0;
//
// }
// _____________________________________________________________

// int main () {
//     string item = "Coffee";
//     double price = 2.5;
//     double tax = 1.20;
//     double total = price * tax;
//
//     cout << setw(10) << left << "Item" <<
//         setw(10) << right << "Price" << endl;
//     cout << setw(10) << left << item <<
//         setw(10) << right << fixed << setprecision(5) << total << endl;
//     cout << setw(10) << setfill('-') << "Menu" << endl <<
//         setw(10) << left << item << setw(10) << right << total << endl;
//
//     return 0;
// }

// ____________________________________________________________________________

class Card {
    public:
        int cardNumber;
        string cardHolder;

};

// Typedef alias cardPtr to for Card*
typedef Card* CardPtr; // CardPtr is an alias of Card*
typedef double DB; // DB is an alias of double

int main() {
    // Create a new card object
    Card myCard;
    myCard.cardNumber = 10;
    myCard.cardHolder = "A";
}