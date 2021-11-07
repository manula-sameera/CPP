#include <iostream>

using namespace std;

class student{
   private:
   int regNo;
   string name;
   float marks[3];
   string grades[3];
   string status[3];
   double avg;

   public:

   void setDetails(int regNo,string name){
       student::regNo=regNo;
       student::name=name;
   }

   void setMarks(float m1,float m2,float m3){
       marks[0]=m1;
       marks[1]=m2;
       marks[2]=m3;
   }
    
   float calcAvg(){
       float ans = (marks[0]+marks[1]+marks[2])/3.0;
       return ans;
   }

   void findGrades(){

       for (int i = 0; i < 3; i++)
       {
          if (marks[i]>=90)
            {
                grades[i]= "A+";
            }else if (marks[i]>=80)
            {
                 grades[i]= "A";
            }else if (marks[i]>=70)
            {
                grades[i]= "B+";
            }else if (marks[i]>=60)
            {
                grades[i]= "B";
            }else if (marks[i]>=50)
            {
                grades[i]= "C+";
            }else if (marks[i]>=40)
            {
                grades[i]= "C";
            }else if (marks[i]>=30)
            {
                grades[i]= "D";
            }else if (marks[i]>=01)
            {
                grades[i]= "E";
            }else if (marks[i]=0)
            {
                grades[i]= "F";
            }




            if (marks[i]>=30)
            {
                status[i]="pass";
            }else{
                status[i]="fail";
            }

            // if (grades[i]=="E" or grades[i]=="F")
            // {
            //     status[i]="fail";
            // }else{
            //     status[i]="pass";
            // }
            
          
       }
       
   }

   void printDetails(){

    cout<<"Student name : "<<name<<endl;
    cout<<"Reg number : "<<regNo<<endl;
    cout<<endl;
    //findGrades();
    for (int i = 0; i < 3; i++)
    {
       cout<<marks[i]<<"\t"<<grades[i]<<"\t"<<status[i]<<endl;
    }

    cout<<endl;

    cout<<"Avarage marks : "<<calcAvg();
    
}

};




int main()
{
    student st1;
    st1.setDetails(1,"Student 1");
    st1.setMarks(50,60,70);
    st1.findGrades();
    st1.printDetails();

    cout<<endl;

    student st2;
    st2.setDetails(1,"Student 2");
    st2.setMarks(25,60,70);
    st2.findGrades();
    st2.printDetails();

   
    return 0;
}
