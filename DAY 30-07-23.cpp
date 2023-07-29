#include<iostream>
using namespace std;
int main()
{
    int value = 2, arr[6] = {1,3,5,7,9,8};
    char data = 'x' , d='a';
    int *p, *q;
    char *r;

    cout<<data+d<<endl; // prints the summation ASCII values of x & a
    p=&value;
    q=arr;
    r=&data;

    (*p)--;
    *p+=3;
    (*r)--;
    *r--;
    *r+=3;

    //cout<<*r;
    cout<<value+1<<" "<<data;
    cout<<*p;
    cout<<*(q+2);
    cout<<arr[--value];
    cout<<arr[value--]<<endl;

    int p2 = 5;
    int **p3=&p; //Storing the memory address of the Pointer p1 into another pointer p3
    int *p4;
    p4=&p2;

    int sum=**p3+*q;
    cout<<"The sum is : "<<sum<<endl;

    (*p)++;
    cout<<*p;

    *p4-=2;
    cout<<*p4<<endl;

    return 0;
}

