#include<iostream>
using namespace std;

int main() {
    int a;
    cout<< "Enter a number between 5 and 10: ";
    cin >> a;
    
    while (a < 5 || a > 10) {
        cout << "Sorry, you entered an invalid number. Please try again: ";
        cin >> a;
         
    }

    cout << "Your input value is "<<a<<endl;

    return 0;
}
