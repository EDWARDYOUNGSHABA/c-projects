#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    cout << "Choose an option:\n";
    cout << "1. Dynamically allocate an integer\n";
    cout << "2. Dynamically allocate a string\n";
    cin >> choice;

    if (choice == 1) {
        int* dynamicInt = new int;
        cout << "Enter the value of the dynamically allocated integer: ";
        cin >> *dynamicInt;
        cout << "Value of the dynamically allocated integer is " << *dynamicInt << endl;
        delete dynamicInt;
    } else if (choice == 2) {
        string* dynamicString = new string;
        cin.ignore();
        cout << "Enter the value of the dynamically allocated string: ";
        getline(cin, *dynamicString);
        cout << "Value of the dynamically allocated string: " << *dynamicString << endl;
        delete dynamicString;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
