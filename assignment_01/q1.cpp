#include <iostream>

using namespace std;

int main() {

  int marks;
  string grade;
  
  do
  {
      cout<<"Enter marks : ";
      cin>>marks;

      if (marks>100 || marks<0)
      {
          cout<<"ERROR! Please enter a numerical value between 0 to 100"<<endl;
          
      }else{
          continue;         
      }     
  } while (marks>100 || marks<0);

  if (marks >= 90)
  {
    grade = "A+";
  }else if(marks >= 80){
    grade = "A";
  }else if(marks >= 75){
    grade = "A";
  }else if(marks >= 65){
    grade = "B+";
  }else if(marks >= 60){
    grade = "B";
  }else if(marks >= 55){
    grade = "B";
  }else if(marks >= 50){
    grade = "C+";
  }else if(marks >= 45){
    grade = "C";
  }else if(marks >= 40){
    grade = "C";
  }else if(marks >= 35){
    grade = "D+";
  }else if(marks >= 30){
    grade = "D";
  }else if(marks > 0){
    grade = "D-";
  }else{
    grade = "invalid";
  }

  if(marks>=45){
      cout<<"Student is PASS , Grade "<<grade;
  }else{
      cout<<"Student is FAIL , Grade "<<grade;
  }
  
  
  
  return 0;
}
