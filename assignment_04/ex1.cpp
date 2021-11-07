#include <iostream>
#include <iomanip>

using namespace std;

class student {       // The class
  public:             // Access specifier
    string name;
    int regNo;
    int marks[3];
    string grade[3];
    double avg;

    void setDetails(int regNo,string name){
        this->regNo = regNo;
        this->name = name;

    }
    void setMarks(float m1,float m2,float m3){
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }
    double calcAvg(){
        return (marks[0]+marks[1]+marks[2])/3.0;
    }
    void findGrades(){

        for (int i = 0; i < 3; i++)
        {
            if (marks[i]>=95)
            {
                grade[i]= "A+";
            }else if (marks[i]>=80)
            {
                 grade[i]= "A";
            }else if (marks[i]>=70)
            {
                grade[i]= "B+";
            }else if (marks[i]>=60)
            {
                grade[i]= "B";
            }else if (marks[i]>=50)
            {
                grade[i]= "C+";
            }else if (marks[i]>=40)
            {
                grade[i]= "C";
            }else if (marks[i]>=30)
            {
                grade[i]= "D";
            }else if (marks[i]>=01)
            {
                grade[i]= "E";
            }else if (marks[i]=0)
            {
                grade[i]= "F";
            }
                  
        }
        

    }
    void printDetails(){
        cout<<"Student name : "<<name<<endl;
        cout<<"Registration number : "<<regNo<<endl;
        findGrades();
        for (int i = 0; i < 3; i++)
        {
            cout<<marks[i]<<left<<setw(3)<<"\t"<<grade[i]<<endl;
        }
        cout<<"avarage marks : "<<calcAvg()<<endl;
    }
};

int main(){
    student s1; //obj 1
    s1.setDetails(10,"Manula");
    s1.setMarks(90,50,60);
    s1.printDetails();

    cout<<"-----------------------------------"<<endl;

    student s2; //obj 2
    s2.setDetails(12,"Sameera");
    s2.setMarks(80,75,66);
    s2.printDetails();

}

