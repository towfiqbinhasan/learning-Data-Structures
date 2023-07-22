#include<iostream>
using namespace std;
int main()
{
    int *ptr, n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    ptr=new int[n]; //Allocating memory (4 bytes for each element) with new keyword
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>*ptr;
        ptr++;
    }
    ptr-=n;
    cout<<"The array is : ";
    for(int i=0; i<n; i++)
    {
        cout<<*ptr<<"\t";
        ptr++;
    }
    return 0;
}
