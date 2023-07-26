#include<iostream>
using namespace std;
int main()
{
    int n=5,m=8;
    int arr1[n];
    int arr2[m];
    int arr3[n+m];
    cout<<"Enter the elements of the array 1 : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<endl;
    cout<<"Enter the elements of the array 2 : "<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        arr3[n+i]=arr2[i];
    }
    cout<<"Array 1: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Array 2 : ";
    for(int i=0;i<m;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    cout<<"The merged array : ";
    for(int i=0;i<n+m;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    cout<<"The merged array in reverse order : ";
    for(int i=n+m-1;i>=0;i--)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}

