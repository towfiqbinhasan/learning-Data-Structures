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
    int counter =1,temp;
    while(counter<n-1)
    {
        for(int i=1;i<n-counter;i++){
            if(a[i]>a[i+1])
            int temp =a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
    }
    }counter++;
    cout<<"The values is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }


    return 0;
}
