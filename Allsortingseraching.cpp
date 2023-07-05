#include <iostream>
using namespace std;
class  Student {
    public:
    string name;
    int id;
    float cgpa;
};
int insertionSort(Student a[], int n) {
    int i,j;
    Student key;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j].cgpa > key.cgpa) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
int bubbleSort(Student a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j].cgpa > a[j + 1].cgpa) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int selectionSort(Student a[], int n) {
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (a[j].cgpa < a[minIndex].cgpa) {
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
    }
}

int displayStudents(Student a[], int n) {
    cout << "Student Details:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Name: " << a[i].name << ", ID: " << a[i].id << ", CGPA: " << a[i].cgpa << endl;
    }
}


int binarySearch(Student a[],int l,int r,float t) {
    if (r>=l) {
        int mid=l+(r-l)/2;

        if (a[mid].cgpa==t) {
            return mid;
        }

        if (a[mid].cgpa>t) {
            return binarySearch(a,l,mid-1,t);
        }

        return binarySearch(a,mid+1,r,t);
    }

    return -1;
}

int main() {
    int Num=4;
    Student students[Num];
    cout << "Enter student details:" << endl;
    for (int i = 0; i < Num; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "ID: ";
        cin >> students[i].id;
        cout << "CGPA: ";
        cin >> students[i].cgpa;
    }


    insertionSort(students, Num);
    cout << "After Insertion Sort:" << endl;
    displayStudents(students, Num);


    bubbleSort(students, Num);
    cout << "After Bubble Sort:" << endl;
    displayStudents(students,Num);

    selectionSort(students,Num);
    cout<<"After selection sort: "<<endl;
    displayStudents(students,Num);

    /*
    dfbinarySearch(students, Num);
    cout<<"After Binary search: "<<endl;
    displayStudents(students,Num);*/
    return 0;
}
