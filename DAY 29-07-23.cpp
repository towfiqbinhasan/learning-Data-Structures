#include<iostream>
using namespace std;

swap(int *p,int *q)
    {

    }
int main()
{
    int z=10;
    int *p=&z;
    int *q=&z;

    z=20;
    *p=30;
    cout<<*p<<endl;
    cout<<z<<endl;

    int arr[10]={12,25,9,2,22,23,140,30,194};
    int *a=&arr[0];
    cout<<*a<<endl;
    cout<<*(a+1)<<endl;
    cout<<*a+1<<endl;

    int x=10;
    int y=20;

    swap(&x,&y);
    cout<<x<<endl;
    cout<<y<<endl;

    swap(x,y);
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}

