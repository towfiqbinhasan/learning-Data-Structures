#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
class Student
{
    public:
    string name;
    int id;
    float cgpa;
};

int inputStudents(Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "ID: ";
        cin >> students[i].id;
        cout << "CGPA: ";
        cin >> students[i].cgpa;
        cin.ignore();
    }
}

int showStudents( Student students[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Student " << i + 1 << ": " << students[i].name << " (ID: " << students[i].id << ", CGPA: " << students[i].cgpa << ")" << endl;
    }
}

int insertionSort(Student students[], int size)
{
    for (int i = 1; i < size; i++)
    {
        Student key = students[i];
        int j = i - 1;
        while (j >= 0 && students[j].cgpa < key.cgpa)
        {
            students[j + 1] = students[j];
            j--;
        }
        students[j + 1] = key;
    }
    cout << endl;
    cout << "Array sorted using Insertion Sort:" << endl;
    showStudents(students, size);
}

int bubbleSort(Student students[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (students[j].cgpa < students[j + 1].cgpa)
            {
                swap(students[j], students[j + 1]);
            }
        }
    }
    cout << endl;
    cout << "Array sorted using Bubble Sort:" << endl;
    showStudents(students, size);
}

int selectionSort( Student students[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (students[j].cgpa > students[minIndex].cgpa)
            {
                minIndex = j;
            }
        }
        swap(students[minIndex], students[i]);
    }
    cout << endl;
    cout << "Array sorted using Selection Sort:" << endl;
    showStudents(students, size);
}

int binarySearch(const Student students[], int left, int right, float cgpa)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;
        if (students[mid].cgpa == cgpa)
        {
            return mid;
        }
        if (students[mid].cgpa < cgpa)
        {
            return binarySearch(students, left, mid - 1, cgpa);
        }
        return binarySearch(students, mid + 1, right, cgpa);
    }
    return -1;
}

int performBinarySearch(const Student students[], int size)
{
    float cgpa;
    cout << "Enter CGPA to search for: ";
    cin >> cgpa;
    int result = binarySearch(students, 0, size - 1, cgpa);
    if (result == -1)
    {
        cout << "\nCGPA not found in the array." << endl;
    }
    else
    {
        cout << "\nCGPA found at index " << result + 1 << "." << endl;
        cout << "Student details: " << students[result].name << " (ID: " << students[result].id << ", CGPA: " << students[result].cgpa << ")" << endl;
    }
}

int main()
{
    const int size = 4;
    Student students[size];

    int choice;
    bool exitProgram = false;

    inputStudents(students, size);

    Student copyStudents[size];
    for (int i = 0; i < size; i++)
    {
        copyStudents[i] = students[i];
    }

    while (!exitProgram)
    {
        cout << "-----------------------------" << endl;
        cout << "Menu:" << endl;
        cout << "1. Apply insertion sort" << endl;
        cout << "2. Apply bubble sort" << endl;
        cout << "3. Apply selection sort" << endl;
        cout << "4. Show entered elements" << endl;
        cout << "5. Apply binary search to the sorted array (search by CGPA)" << endl;
        cout << "0. Exit" << endl;
        cout << "-----------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            insertionSort(copyStudents, size);
            break;
        case 2:
            bubbleSort(copyStudents, size);
            break;
        case 3:
            selectionSort(copyStudents, size);
            break;
        case 4:
            cout << endl;
            cout << "List of students:";
            showStudents(students, size);
            break;
        case 5:
            performBinarySearch(copyStudents, size);
            break;
        case 0:
            exitProgram = true;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

        cout << endl;
    }

    return 0;
}
