#include <iostream>
#include <iomanip>
#include <cmath>
#include <bitset>
#include <string>

using namespace std;

int main()
{
    string username;
    int number,firstclass = 0,loginresult=0;
    int sub[3];
    string username1[2] = {"Nayana","Kamal"};
    int number1[2] = {123,321};
    //bool feedback;

    while(loginresult = 1){

        cout <<"ENTER USERNAME(Nayana or Kamal) :";
        cin>>username;
        cout <<"ENTER USER ID(123 or 321)       :";
        cin>>number;



        for (int i=0; i < 2; i++){

            if (username==username1[i] && number==number1[i]){

                //feedback = true;
                cout<<"\nUsername : "<<username <<endl;
                cout<<"Password :" <<number   <<endl;
                loginresult = 1;
                i=2;



                cout<<"\nEnter 1st subject result : " ;
                cin>>sub[0];
                cout<<"Enter 2nd subject result : " ;
                cin>>sub[1];
                cout<<"Enter 3rd subject result : " ;
                cin>>sub[2];
                cout<<"\n";


            for(int j = 0; j<3; j++){
                if(sub[j]>=90){
                    cout<<"Subject " <<j+1 <<" Result is Very Good : "<<sub[j]<<endl;
                    firstclass = firstclass + 1;
                }
                else if(sub[j]>=75){
                    cout<<"Subject " <<j+1 <<" Result is Very Good : "<<sub[j]<<endl;
                }
                else if(sub[j]>=50){
                    cout<<"Subject " <<j+1 <<" Result is Good      : " <<sub[j]<<endl;
                }
                else if(sub[j]>=35){
                    cout<<"Subject " <<j+1 <<" Result is Average   : "  <<sub[j]<<endl;
                }
                else if(sub[j]>=0){
                    cout<<"Subject " <<j+1 <<" Result is Fail      : "<<sub[j]<<endl;
                }
            }

            if(firstclass == 3){
                    cout<<"\nHis Grade is First Class. "<<endl;
                }



            }else{
                //feedback = false;
                loginresult = loginresult + 1;

            }

            if (loginresult == 2){
                cout<<"\nInvalid Username or Password." <<"\n" <<endl;
            }
        }
    }




    return 0;
}
