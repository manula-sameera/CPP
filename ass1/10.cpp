#include <iostream>
#include <bitset>

using namespace std;

int num1 = 15;
int num2 = 24;

int main() {

    cout<<num1 <<" = "<<std::bitset<8>(num1).to_string()<<endl;
    cout<<num2 <<" = "<<std::bitset<8>(num2).to_string()<<endl;

    cout<<"num1 and num2 = "<<(num1 & num2)<<endl;
    cout<<"num1 and num2 in binary = "<<std::bitset<8>((num1 & num2)).to_string()<<endl;

    cout<<endl;

    cout<<"num1 or num2 = "<<(num1 | num2)<<endl;
    cout<<"num1 or num2 in binary = "<<std::bitset<8>((num1 | num2)).to_string()<<endl;

    cout<<endl;

    cout<<"num1 xor num2 = "<<(num1 ^ num2)<<endl;
    cout<<"num1 xor num2 in binary = "<<std::bitset<8>((num1 ^ num2)).to_string()<<endl;

    cout<<endl;

    cout<<num1 << " Complement = "<<(~num1)<<endl;
    cout<<num1 << " Complement in binary = "<<std::bitset<8>((~num1)).to_string()<<endl;
    cout<<num2 << " Complement = "<<(~num2)<<endl;
    cout<<num2 << " Complement in binary = "<<std::bitset<8>((~num2)).to_string()<<endl;
    return 0;
}