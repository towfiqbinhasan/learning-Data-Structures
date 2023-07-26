#include<iostream>
using namespace std;
struct Student
{
    string name;
    string id;
    int age;

    void fun(float *ptr)
    {
        ++(*ptr);
    }
};

int main()
{
    Student ob, *p;
    ob.name="Anil Roy";
    ob.id="22-48691-3";
    ob.age=20;

    cout<<"Name of the student : "<<ob.name<<endl;
    cout<<"ID of the student : "<<ob.id<<endl;

    p=&ob;
    p->age=30;
    cout<<"Age of the student : "<<p->age<<endl;

    float cgpa=3.0;
    p->fun(&cgpa);
    cout<<"CGPA of the student : "<<cgpa<<endl;

    return 0;
}
