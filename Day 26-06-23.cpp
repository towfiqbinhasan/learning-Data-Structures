#include <iostream>
using namespace std;
#define MAX_SIZE 100

class Stack {
private:
    int top;
    int stack[MAX_SIZE];

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow!" <<endl;
            return;
        }
        stack[++top] = value;
        cout << value << " pushed to the stack." <<endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow!" <<endl;
            return;
        }
        int value = stack[top--];
        cout << value << " popped from the stack." <<endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" <<endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; --i) {
            cout << stack[i] << " ";
        }
        cout <<endl;
    }
};

int main() {
    Stack stack;
    int choice, value;

    do {
        cout << "Stack Menu" <<endl;
        cout << "1. Push" <<endl;
        cout << "2. Pop" <<endl;
        cout << "3. Display" <<endl;
        cout << "4. Quit" <<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.display();
                break;
            case 4:
                cout << "Exiting..." <<endl;
                break;
            default:
                cout << "Invalid choice. Try again." <<endl;
        }

        cout <<endl;
    } while (choice != 4);

    return 0;
}

