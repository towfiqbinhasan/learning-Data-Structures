#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int *ptr=new int[n];
    if(ptr==NULL)
    {
        cout<<"Error! Not allocated"<<endl;
    }
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>*ptr;
        sum+=*ptr;
        ptr++;
    }
    cout<<"The sum is : "<<sum<<endl;
    ptr=ptr-n;
    cout<<"The elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    delete[] ptr;
    cout<<*ptr;
    return 0;
}
