#include <iostream>
using namespace std;

int main() {
    int size;


    cout << "Enter the size of the array: ";
    cin >> size;


    int array[size];


    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }


    int multiplier;
    cout << "Enter the multiplier: ";
    cin >> multiplier;


    for (int i = 0; i < size; i++) {
        array[i] *= multiplier;
    }


    cout << "Multiplied array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
