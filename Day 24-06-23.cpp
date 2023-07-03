#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of this array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of this array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[n];
    }
    for(int i=1;i<n;i++)
    {
        int current = a[i];
        int j=i-1;
        while(a[j]>current && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    cout<<"The insertion array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
     cout<<endl;

    return 0;
}
