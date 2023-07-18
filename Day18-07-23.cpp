#include<iostream>
using namespace std;
void bubble(int a[],int n)
{
    int i,j,temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j+1]=a[j];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int s;
    int in;
    int n;
    cout<<"Enter the size of this array: "<<endl;
    cin>>s;
    int a[s];
    cout<<"Enter the elements of this array: "<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    cout<<"Output: "<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<a[i];
    }
    bubble(a,n);
    cout<<"After the sorting: "<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<a[i];
    }
    int sum;
    for(int i=0;i<s;i++)
    {
        sum+=a[i];
    }
    cout<<"The sum is: "<<sum<<endl;
    int flag =0;
    for(int i=0;i<s;i++)
    {
        if(in>=a[i])
        {

            flag++;
            in-=a[i];
        }
        else
        {
            break;
        }
    }
    cout<<"Total amount: "<<flag<<endl;
    return 0;
}
