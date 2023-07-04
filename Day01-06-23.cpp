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

    int result = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i == 0 && j == 0) {
                continue;
            }
            result -= arr[i][j];
        }
    }

    cout << "Subtraction result: " << result <<endl;

    return 0;
}
