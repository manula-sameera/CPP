#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("ex2.txt");

  ofstream MyFile("ex2.txt",ios_base::app); //append

 for (int i = 0; i <= 30; i++)
 {
   MyFile << i<<endl;
 }
 
  

  // Close the file
  MyFile.close();
}