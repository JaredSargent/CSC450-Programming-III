#include <iostream>
#include <string> // Include the string library

using namespace std;

int main() {
    // Declare string variables for input and result
    string string1, string2, concatenatedString;

    // Loop 3 times to get user input
    for (int i = 0; i < 3; i++) {
        // Ask for first string input
        cout << "Enter the first string: ";
        getline(cin, string1); // Use getline to read the full string including spaces

        // Ask for second string input
        cout << "Enter the second string: ";
        getline(cin, string2); // Use getline to read the full string including spaces

        // Concatenate the two strings
        concatenatedString = string1 + string2;

        // Display the concatenated string
        cout << "Concatenated String: " << concatenatedString << endl << endl;
    }

    return 0;
}
