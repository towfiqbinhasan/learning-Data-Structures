#include <iostream>
#include <stack>

const int capacity = 6;
int stack[capacity];
int top = -2;

void push(int x)
{
    if (top < capacity-2  )
    {
        top=top+2;
        stack[top] = x;
        std::cout << "Successfully added item: " << x << std::endl;
    }
    else
    {
        std::cout << "Exception! Stack is full." << std::endl;
    }
}

int pop()
{
    if (top >= 0)
    {
        int poppedItem = stack[top];
        top=top-2;
        std::cout << "Successfully removed item: " << poppedItem << std::endl;
        return poppedItem;
    }
    else
    {
        std::cout << "Exception! Stack is empty." << std::endl;
        return -1;
    }
}

int peek()
{
    if (top >= 0)
    {
        std::cout << "Top item: " << stack[top] << std::endl;
        return stack[top];
    }
    else
    {
        std::cout << "Exception! Stack is empty." << std::endl;
        return -1;
    }
}

int main()
{
    std::cout << "Implementing my stack in C++" << std::endl;
    push(5);
    push(10);
    push(15);
    push(20);
    push(25);
    pop();
    peek();
    pop();
    peek();
    push(30);
    peek();
    pop();
    pop();
    pop();
    peek();

    return 0;
}

