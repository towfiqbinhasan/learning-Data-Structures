#include<iostream>
using namespace std;
int linerserach(int a[],int key, int n){
for(int i=0; i<n;i++)
{
    if(a[i]==key){
        return i;
    }}
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of this array: "<<endl;
    cin>>n;
    int a[n],key;
    cout<<"Enter the elements of this array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the searching element: "<<endl;
    cin>>key;

    {
        cout<<"The searching element index number is: "<<linerserach(a,key,n)<<endl;
    }

    return 0;
}
