#include<iostream>
using namespace std;

struct Student
{
    string id;
    int marks;
};

int main()
{
    int n;
    cout<<"Enter max size of the rows / columns : ";
    cin>>n;

    Student s[n][n];
    cout<<"Enter the ID & Marks of the students : "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"ID : ";
            cin>>s[i][j].id;
            cout<<"Marks : ";
            cin>>s[i][j].marks;
        }
    }

    cout<<endl<<endl;

    int sum = 0;
    int count1 = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((i+j) == n-1 || i==j)
            {
                count1++;
                sum += s[i][j].marks;
            }
        }
    }

    int sum2 = 0;
    int count2 = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0 ; j<n; j++)
        {
            if(i==0 || j==0 || i== n-1 || j==n-1)
            {
                count2++;
                sum2 += s[i][j].marks;
            }
        }
    }

    int avg1 = sum / count1, avg2 = sum2 / count2;

    cout<<"Average of the diagonal elements : "<<avg1<<endl<<endl;
    cout<<"Average of the boundary elements : "<<avg2<<endl<<endl;
    cout<<"Difference of teh diagonal & boundary elements : ";
    if(avg1 > avg2)
    {
        cout<<avg1 - avg2;
    }
    else if(avg1 < avg2)
    {
        cout<<avg2 - avg1;
    }
    else
    {
        cout<<"0";
    }

    cout<<endl<<endl;


    string arr[] ={"1.Bubble Sort","2.Selection Sort", "3.Insertion sort"};
    cout<<"Choose any of the options from below : "<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;

    int choose;
    cout<<"Option : ";
    cin>>choose;
    cout<<endl;

    if(choose == 1)
    {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n-1; j++) {
                for(int k = 0; k < n-1-j; k++) {
                    if(s[i][k].marks > s[i][k+1].marks) {
                        int temp = s[i][k].marks;
                        s[i][k].marks = s[i][k+1].marks;
                        s[i][k+1].marks = temp;
                    }
                }
            }
        }

        cout<<"Bubble sort applied ------>>>"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<s[i][j].marks<<" ";
            }
        }
    }

    if(choose == 2)
    {
        if (choose == 2) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n - 1; j++) {
                    for (int k = j + 1; k < n; k++) {
                        if (s[j][i].marks > s[k][i].marks) {
                            int temp = s[k][i].marks;
                            s[k][i].marks = s[j][i].marks;
                            s[j][i].marks = temp;
                        }
                    }
                }

            }
            }


        cout<<"Selection Sort applied ------->>>>"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<s[i][j].marks<<" ";
            }
        }
    }

    return 0;
}
