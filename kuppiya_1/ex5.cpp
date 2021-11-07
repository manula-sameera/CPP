#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(){
//    char words[50];
//    cout<<"Enter words  :";
//    cin.getline(words,50);


//    //cout<<words;
//    puts(words);

char names[4][6]={"name1","name2","name3","name4"};

for (int i = 0; i < 4; i++)
{
    for (int j = 0; names[i][j] !='\0'; j++)
    {
       cout<<names[i][j]<<endl;
    }
    
}
cout<<names;


// char aa[30] = "Manula sameera";

// for (int i = 0; aa[i] !='\0'; i++)
// {
//     cout<<aa[i]<<endl;
// }



}