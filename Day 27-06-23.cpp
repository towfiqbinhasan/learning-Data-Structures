#include<iostream>
using namespace std;
int main()
{
    int a[10]={10,15,45,20,25,6,1,100,65,99};
    int sum = 0;
    for (int i=0;i<10;i+=2)
    {
        if(sum%2==0)
            sum=a[i];
    }
    cout<<"The result is: "<<sum<<endl;






    return 0;
}
