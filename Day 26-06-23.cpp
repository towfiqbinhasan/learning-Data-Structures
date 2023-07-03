#include<iostream>
using namespace std;
class stack
{
    int n;
    int* a;
    int top;
public:
    stack()
    {
        a=new int[n];
        top=-1;
    }
    void push(int x)
    {
        if(top==n-1)
            {
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        a[top]=x;
    }
    void pop()
    {
    if(top==-1)
        {
        cout<<"No element to po"<<endl;
        return;
    }
    top--;
}
int Top()
{
if(top==-1)
    {
    cout<<"No element in stak"<<endl;
    return -1;
}
return a[top];

}
bool empty()
{

    return top==-1;
}
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    st.Top();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
};

