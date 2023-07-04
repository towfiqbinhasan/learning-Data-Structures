#include <iostream>
using namespace std;

int main() {
    int rows, columns;


    cout << "Enter the number of rows: ";
    cin >> rows;


    cout << "Enter the number of columns: ";
    cin >> columns;


    int matrix[rows][columns];


    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    int searchValue;
    bool found = false;
    int rowPosition, columnPosition;


    cout << "Enter the value to search: ";
    cin >> searchValue;


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == searchValue) {
                found = true;
                rowPosition = i;
                columnPosition = j;
                break;
            }
        }
        if (found) {
            break;
        }
    }


    if (found) {
        cout << "The value " << searchValue << " is found at position (" << rowPosition << ", " << columnPosition << ")." << endl;
    } else {
        cout << "The value " << searchValue << " is not found in the matrix." << endl;
    }

    return 0;
}
