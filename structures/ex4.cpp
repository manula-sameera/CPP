#include <iostream>
#include <string.h>

using namespace std;

struct Books
{
    char title[50];
    char author[100];
    char subject[100];
    int book_id;
};

int main()
{

    Books book1;

    strcpy(book1.title, "My book");
    strcpy(book1.author, "ABC");
    strcpy(book1.subject, "Subjetc 1");
    book1.book_id = 10;

    cout << "title : " << book1.title << endl;
    cout << "author : " << book1.author << endl;
    cout << "subject : " << book1.subject << endl;
    cout << "book id : " << book1.book_id << endl;

    return 0;
}