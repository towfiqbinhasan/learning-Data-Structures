#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size];

    cout << "Enter " << size << " elements:" <<endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }

    int result = arr[0];
    for (int i = 1; i < size; ++i) {
        result -= arr[i];
    }

    cout << "Subtraction result: " << result <<endl;

    return 0;
}
