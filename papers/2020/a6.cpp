#include <iostream>

using namespace std;

class book
{
public:
    int price;
    int pages;
    int year;

    book(int p, int pa, int y)
    {
        price = p;
        pages = pa;
        year = y;
        cout << " main constructor" << endl;
    }
    book()
    {
        // price = 0;
        // pages = 0;
        // year = 0;
        cout << "default constructor\b" << endl;
    }
    void boo2k()
    {
        cout << "book function" << endl;
    }
};

int main()
{
    // book obj;
    //  book obj = book();
    //  obj.boo2k();

   string a = "doiwandkoj";
   //find size of string
    cout << a.size() << endl;

    int arr1[] = {4, 5, 6, 7};
    int *p = (arr1 +1);
    cout << *p+10 << endl;

    string* x,y;
    y="hello";
    x=&y;
}