#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Please select the area of a shape to calculate:\n";
    cout << "1. Triangle\n";
    cout << "2. Rectangle\n";
    cout << "3. Square\n";
    cout << "4. Quit program\n";
    cin >> a;

    switch (a) {
        case 1: {
            int b, h;
            cout << "Base of triangle: ";
            cin >> b;
            cout << "Height of triangle: ";
            cin >> h;
            int result = 0.5 * b * h;
            cout << "Area of triangle is: " << result << endl;
            break;
        }
        case 2: {
            int l, w;
            cout << "Length of rectangle: ";
            cin >> l;
            cout << "Width of rectangle: ";
            cin >> w;
            int resultre = l * w;
            cout << "Area of rectangle is: " << resultre << endl;
            break;
        }
        case 3: {
            int s;
            cout << "Side of square: ";
            cin >> s;
            int results = s * s;
            cout << "Area of square is: " << results << endl;
            break;
        }
        case 4:{
            cout << "Exiting program.\n";
            return 0;
            default:
                cout << "Invalid choice.\n";
            break;
        }
    }

    return 0;
}