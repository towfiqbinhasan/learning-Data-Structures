#include<iostream>
using namespace std;
int linersearch(int n,char a[],char key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of this array: "<<endl;
    cin>>n;
    char a[n];
    cout<<"Enter the elements of this array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    char key;
    cout<<"Enter the finding key: "<<endl;
    cin>>key;
    {
        cout<<"The finding  key index number is: "<<linersearch(n,a,key)<<endl;
    }
    return 0;
}
