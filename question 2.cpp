#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Get dimensions of the 2D array from the user
    do {
        cout << "Enter the number of rows (maximum 3): ";
        cin >> rows;
        if (rows > 3) {
            cout << "Number of rows cannot exceed 3. Please enter again." << endl;
        }
    } while (rows > 3);

    do {
        cout << "Enter the number of columns (maximum 3): ";
        cin >> cols;
        if (cols > 3) {
            cout << "Number of columns cannot exceed 3. Please enter again." << endl;
        }
    } while (cols > 3);

    // Dynamically allocate memory for the 2D array
    double** twoDarray = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        twoDarray[i] = new double[cols];
    }

    // Input values into the 2D array
    cout << "Enter the values for the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> twoDarray[i][j];
        }
    }

    // Output the 2D array
    cout << "\nThe 2D array you entered is:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << twoDarray[i][j] << " ";
        }
        cout << endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] twoDarray[i];
    }
    delete[] twoDarray;

    return 0;
}
