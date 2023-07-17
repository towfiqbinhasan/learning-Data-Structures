#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> userInputQueue;
    char input;
    int value;
    cout << "User Input Queue" <<endl;
    cout << "Enter '1' to push a value into the queue" <<endl;
    cout << "Enter '2' to pop a value from the queue" <<endl;
    cout << "Enter '3' to quit" <<endl;
    while (true) {
        cout << "Enter a command: ";
        cin >> input;
        if (input == '1') {
            cout << "Enter a value to push into the queue: ";
            cin >> value;
            userInputQueue.push(value);
            cout << value << " was pushed into the queue." <<endl;
        } else if (input == '2') {
            if (!userInputQueue.empty()) {
                value = userInputQueue.front();
                userInputQueue.pop();
                cout << value << " was popped from the queue." <<endl;
            } else {
                cout << "The queue is empty. Cannot pop." <<endl;
            }
        } else if (input == '3') {
            cout << "Quitting the program." <<endl;
            break;
        } else {
            cout << "Invalid input. Please try again." <<endl;
        }
    }
    return 0;
}
