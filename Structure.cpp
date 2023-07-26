#include<iostream>
#include<cstring>
using namespace std;

struct Employee
{
    char name[20];
    int age;
    float salary;
};

struct Owner
{
    char name[20];
    int age;
    float salary;
};

struct Student
{
    char name[20];
    int roll, age;
    void Input3()
    {
        cout<<"Enter the name of the Student : ";
        cin>>name;
        cout<<"Enter the roll of the Student : ";
        cin>>roll;
        cout<<"Enter the age of the Student : ";
        cin>>age;
    }
    void Output3()
    {
        cout<<"The Roll of "<<name<<" is "<<roll<<" aged "<<age<<endl;
    }
};

int main()
{
   Employee ob1;
   strcpy(ob1.name,"Nazmul Islam");
   ob1.age=29;
   ob1.salary=70245;
   cout<<"Name of the Employee : "<<ob1.name<<endl;
   cout<<"Age of the Employee : "<<ob1.age<<endl;
   cout<<"Salary of the Employee : "<<ob1.salary<<endl;

   Owner ob2={"Sam Curran",25,123456.50}; // Maintaining the serial of variables is a must for explicit initialization
   cout<<"Name of the Owner : "<<ob2.name<<endl;
   cout<<"Age of the owner : "<<ob2.age<<endl;
   cout<<"Salary of the Owner : "<<ob2.salary<<endl;

   Student ob3;
   ob3.Input3();
   ob3.Output3();

   return 0;
}
