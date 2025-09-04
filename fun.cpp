#include <iostream>
using namespace std;

int main() {
    int number;
    char choice;
    
    cout << "=== C++ IF STATEMENT DEMONSTRATION ===" << endl;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    }
    
    
    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
    
    
    if (number > 100) {
        cout << "The number is greater than 100." << endl;
    } else if (number > 50) {
        cout << "The number is between 51 and 100." << endl;
    } else if (number > 0) {
        cout << "The number is between 1 and 50." << endl;
    } else if (number == 0) {
        cout << "The number is zero." << endl;
    } else {
        cout << "The number is negative." << endl;
    }
    
    
    cout << "\nDo you like programming? (y/n): ";
    cin >> choice;
    
    if (choice == 'y' || choice == 'Y') {
        cout << "Great! ";
        
        if (number > 0) {
            cout << "And you entered a positive number!" << endl;
        } else {
            cout << "But you didn't enter a positive number." << endl;
        }
    } else if (choice == 'n' || choice == 'N') {
        cout << "Maybe you'll like it later!" << endl;
    } else {
        cout << "Invalid response. Please enter 'y' or 'n' next time." << endl;
    }
    
    return 0;
}