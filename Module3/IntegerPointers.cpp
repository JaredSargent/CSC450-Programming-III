#include <iostream>
using namespace std;

int main() {
    // Declare regular integer variables
    int num1, num2, num3;
    
    // Declare integer pointers
    int* ptr1;
    int* ptr2;
    int* ptr3;
    
    // Get input from user
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    cout << "Enter third integer: ";
    cin >> num3;
    
    // Dynamically allocate memory using new
    ptr1 = new int;
    ptr2 = new int;
    ptr3 = new int;
    
    // Assign values to pointer locations
    *ptr1 = num1;
    *ptr2 = num2;
    *ptr3 = num3;
    
    // Display variable contents
    cout << "\nVariable Values:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    
    // Display pointer contents
    cout << "\nPointer Values:" << endl;
    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "*ptr3 = " << *ptr3 << endl;
    
    // Display pointer addresses
    cout << "\nPointer Addresses:" << endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr2 = " << ptr2 << endl;
    cout << "ptr3 = " << ptr3 << endl;
    
    // Free dynamically allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;
    
    return 0;
}