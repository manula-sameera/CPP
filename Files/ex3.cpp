#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create a text string, which is used to output the text file
    //string myText;
    char ch;
    int count=0;
    // Read from the text file
    ifstream MyReadFile("ex2.txt");

    // Use a while loop together with the getline() function to read the file line by line

    // while (getline(MyReadFile, myText)) //does not render spaces and linebrakes // This is better to get charachter count
    // {
    //     // Output the text from the file
    //     cout << myText;
    // }

    while (!MyReadFile.eof())
    {
        MyReadFile.get(ch);
        cout<<ch;
        count++;
    }
    cout<<"Count : "<<count;
    

    // Close the file
    MyReadFile.close();
}