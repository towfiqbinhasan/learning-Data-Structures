#include<iostream>
#include<cstring>
using namespace std;
struct Student
{
    string name;
    char id[20];
    float cgpa;
    struct Address
    {
        int *pcode;
    }add;
}st,*p;
int main()
{
    st.name="Tim David";
    cout<<"Name of the student : "<<st.name<<endl;
    strncpy(st.id,"22-48691-3",sizeof(st.id));
    int pcodevalue=1207;
    cout<<"ID of the student : "<<st.id<<endl;
    st.add.pcode=new int(pcodevalue);
    cout<<"Post Code of the Address : "<<*(st.add.pcode)<<endl;
    delete st.add.pcode;
    p=&st;
    st.cgpa=4.0;
    cout<<"CGPA of the student : "<<p->cgpa<<endl;
    return 0;
}
