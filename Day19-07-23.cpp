#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of this array: "<<endl;
    cin>>n;
    cout<<"Enter the elements of this array: "<<endl;
    char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]-=32;
        }
        else if(a[i]>='A'&& a[i]<='Z')
        {
            a[i]+=32;
        }
    }
    cout<<"The final result is: "<<endl;
    for(int i=0;i<n;i++)
    {

        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
