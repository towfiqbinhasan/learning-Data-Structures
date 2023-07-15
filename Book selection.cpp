#include <iostream>
using namespace std;

struct Book{
    int bookID;
    string title;
    string author;
    float price;

};
void show(Book books[],int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<i+1<<","<<books[i].bookID<<","<<books[i].title<<","<<books[i].author<<","<<books[i].price<<endl;
    }
}

void selectionSort(Book books[], int size) {
    for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
      if (books[i].price<books[min_idx].price)
        min_idx = i;
    }

    swap(books[min_idx].price,books[step].price);
    }
}
int main()
{
    int sizee=7;
    Book books[sizee];

    books[0]={101,"Book A","Author A",10.99};
    books[1]={102,"Book B","Author B",9.99};
    books[2]={103,"Book C","Author C",12.99};
    books[3]={104,"Book D","Author D",8.99};
    books[4]={105,"Book E","Author E",11.99};
    books[5]={106,"Book F","Author F",7.99};
    books[6]={107,"Book G","Author G",14.99};

    selectionSort(books,sizee);
    show(books,sizee);

    return 0;
}
