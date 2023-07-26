#include<iostream>
using namespace std;
void fun(void *a,int psize)
{
    if(psize==sizeof(int))
    {
        int *x;
        x=(int*)a;
        (*x)++;
    }
    else if(psize==sizeof(char))
    {
        char *c;
        c=(char*)a;
        ++(*c);
    }
}
int main()
{
    int m=12;
    char n='D';
    fun(&m,sizeof(m));
    fun(&n,sizeof(n));
    cout<<"Roll of Mr. "<<n<<" is "<<m<<endl; //Increaser
}
