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
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    {
        if(a[j]<a[i])
        {
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    cout<<"The sorting values: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"  "<<a[i]<<endl;

    }




    return 0;
}
