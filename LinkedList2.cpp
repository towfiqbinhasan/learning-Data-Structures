#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *nextNode;
};

int main()
{
    Node *firstNode, *currentNode, *newNode;

    newNode = new Node;
    newNode->data = 5;
    firstNode = newNode;
    currentNode = firstNode;

    newNode = new Node;
    newNode->data = 10;
    currentNode->nextNode = newNode;
    currentNode = newNode;

    newNode = new Node;
    newNode->data = 15;
    currentNode->nextNode = newNode;
    currentNode = newNode;

    newNode = new Node;
    newNode->data = 20;
    newNode->nextNode = nullptr;
    currentNode->nextNode = newNode;
    currentNode = newNode;

    //Insertion at the first position
    newNode = new Node;
    newNode->data = 30;
    newNode->nextNode = firstNode;
    firstNode = newNode;

    //Insertion at the last position
    newNode = new Node;
    newNode->data = 40;
    newNode->nextNode = nullptr;
    currentNode->nextNode = newNode;

    //Deletion of the First Node
    currentNode = firstNode;
    firstNode = currentNode->nextNode;

    //Print the current Linked List
    currentNode = firstNode;
    while(currentNode != nullptr)
    {
        cout<<currentNode->data<<" ";
        currentNode = currentNode->nextNode;
    }

    //Dynamically memory deletion
    currentNode = firstNode;
    while(currentNode != NULL)
    {
        Node *temp = currentNode;
        currentNode = currentNode->nextNode;
        delete temp;
    }

    return 0;
}
