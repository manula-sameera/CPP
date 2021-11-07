#include<iostream>
#include<iomanip>
using namespace std;
int main()
{


int allstu=45;
int boys=25;
cout<<left<<setw(40)<<setfill(' ')<<"Total students in the class room: "<<allstu<<endl;
cout<<left<<setw(40)<<setfill(' ')<<"Boys in the class room: "<<boys<<endl;
int passed_students;
int failed_boys;
int passed_boys;
passed_students=((allstu*80)/100);
cout<<"PAssed : "<<passed_students<<endl;
failed_boys=((allstu-passed_students)-2);
passed_boys=(boys-failed_boys);
cout<<left<<setw(40)<<setfill(' ')<<"Exam passed boys in the class room: "<<passed_boys<<endl;

return 0;
}
