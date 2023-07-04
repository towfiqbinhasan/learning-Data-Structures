#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;

    int arr[rows][cols];

    cout << "Enter the elements of the array:" <<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += arr[i][j];
        }
    }

    cout << "Sum of all elements: " << sum <<endl;

    return 0;
}

