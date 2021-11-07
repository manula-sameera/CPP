#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int marks[30]; //storing marks

float round_numbers(float value, unsigned char prec)
{
  float pow_10 = pow(10.0f, (float)prec);
  return round(value * pow_10) / pow_10;
} // round a number to given decimal points

void select_options(int); //a foward declaration for looping

void main_menu() {
  cout << "------------------------ \n";
  cout << "Result Sheet Genarator \n";
  cout << "------------------------\n\n";
  cout << "[1] Add new Student marks\n\n";
  cout << "[2] Print Marks Sheet\n\n";
  cout << "[3] Print Grade Sheet\n\n";
  cout << "[4] Print Summery Sheet\n\n";
  cout << "[5] Exit\n\n";
  cout << "Enter your selection : ";
  int option;
  cin >> option;
  select_options(option);

}//printing main menu

void add_new_marks(){
    //(sizeof(marks)/sizeof(marks[0]))
    for(int i = 0; i <30 ; i++) {
        cout << "Enter marks for student "<<i+1<<" of 30 : ";
        int val;
        cin >> val;
        if (val>0 && val<100)
        {
           marks[i]=val;
           continue;
        }else{
            cout << "Enter valid marks \n";
            i=i-1;
            continue;
        }       
}
    main_menu();
} //add marks to array

void print_marks_sheet(){
    cout << "------------------------ \n";
    cout << "Mark Sheet \n";
    cout << "------------------------\n\n";
    cout << "ID                Sub1 \n";
    for(int i = 0; i < 30; i++) {
        cout << i+1<<"                 "<<marks[i]<<"\n";
    }
    cout << "------------------------ \n\n";
    main_menu();
}//print marks

void print_grade_sheet(){
    cout << "------------------------ \n";
    cout << "Grade Sheet \n";
    cout << "------------------------\n\n";
    cout << "ID                Sub1 \n";
    for(int i = 0; i < 30; i++) {
       string grade;

        if (marks[i]>=90){
            grade = "A+";
        }else if (marks[i]>=80){
            grade = "A";
        }else if (marks[i]>=70){
            grade = "B+";
        }else if (marks[i]>=60){
            grade = "B";
        }else if (marks[i]>=50){
            grade = "C+";
        }else if (marks[i]>=40){
            grade = "C";
        }else if (marks[i]>=30){
            grade = "D+";
        }else if (marks[i]>=20){
            grade = "D";
        }else if (marks[i]<20){
            grade = "E";
        }else{
            grade = "Invalid Data";
        }

        cout << i+1<<"                 "<<grade<<"\n";
    }
    cout << "------------------------ \n\n";
    main_menu();
}//print grade

void print_data_summary(){
    cout << "------------------------ \n";
    cout << "Class Summery \n";
    cout << "------------------------\n\n";
    cout << "                  Sub1 \n";
    int sum=0;
    int min=100;
    int max=0;
    for(int i = 0; i <30; i++) {
        //cout << i+1<<"                 "<<marks[i]<<"\n";
        sum = sum+marks[i];
    } // to get sum of marks

    for(int i = 0; i <30; i++) {
        if (min>marks[i])
        {  
            min=marks[i];
        }else if(min<marks[i]){ 
            min = min;
        }else if(min==marks[i]){ 
            min=min;
        }//find min marks

        if (max>marks[i])
        {
            max=max;
        }else if(max<marks[i]){
            max = marks[i];
        }else if(min==marks[i]){
           max=max;
        }//find max marks
    } 
    float avg = sum/30.0;
    cout <<"Avarage           "<<round_numbers(avg,2)<<"\n";
    cout <<"Min               "<<min<<"\n";
    cout <<"Max               "<<max<<"\n";
    cout << "------------------------ \n\n";
    main_menu();
}

void select_options(int input){
    switch(input) {
    case 1:
        add_new_marks();
        break;
    case 2:
        print_marks_sheet();
        break;
    case 3:
        print_grade_sheet();
        break;
    case 4:
        print_data_summary();
        break;
    case 5:
        exit(0);
        break;
    default:
        cout<<"\nInvalid entry\n";
        main_menu();
        break;
    
}
}

int main()
{
    main_menu();
    return 0;
}