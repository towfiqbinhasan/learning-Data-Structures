#include<iostream>
using namespace std;
int binaraysearch(int n, int a[],int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            e=mid-1;
        }
        else

        {
           s=mid+1;
        }
    }
    return -1;
}
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
    int key;
    cout<<"Enter the searching array: "<<endl;
    cin>>key;
    {
        cout<<"The searching element array index number is: "<<binaraysearch(n,a,key)<<endl;
    }
    return 0;
}
