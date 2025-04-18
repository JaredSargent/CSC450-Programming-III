// person.cpp
// Displays fictional person's information in a console application

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables for person's information
    string firstName = "John";
    string lastName = "Doe";
    string streetAddress = "123 Main St";
    string city = "Anytown";
    string zipCode = "12345";

    // Display the information
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    return 0;
}