#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> // For std::reverse

using namespace std;

// Function to reverse a string
string reverseString(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main() {
    string input, content;

    // Step 1: Get user input
    cout << "Enter a string to append to CSC450_CT5_mod5.txt: ";
    getline(cin, input);

    // Step 2: Append user input to CSC450_CT5_mod5.txt
    ofstream outFile("CSC450_CT5_mod5.txt", ios::app);
    if (outFile.is_open()) {
        outFile << input << endl;
        outFile.close();
    } else {
        cerr << "Error: Unable to open CSC450_CT5_mod5.txt for appending." << endl;
        return 1;
    }

    // Step 3: Read content from CSC450_CT5_mod5.txt
    ifstream inFile("CSC450_CT5_mod5.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            content += line + "\n";
        }
        inFile.close();
    } else {
        cerr << "Error: Unable to open CSC450_CT5_mod5.txt for reading." << endl;
        return 1;
    }

    // Step 4: Reverse the content
    string reversedContent = reverseString(content);

    // Step 5: Write reversed content to CSC450-mod5-reverse.txt
    ofstream reverseFile("CSC450-mod5-reverse.txt");
    if (reverseFile.is_open()) {
        reverseFile << reversedContent;
        reverseFile.close();
    } else {
        cerr << "Error: Unable to open CSC450-mod5-reverse.txt for writing." << endl;
        return 1;
    }

    // Step 6: Display success message
    cout << "Operation completed successfully!" << endl;
    cout << "Input appended to CSC450_CT5_mod5.txt" << endl;
    cout << "Reversed content written to CSC450-mod5-reverse.txt" << endl;

    return 0;
}