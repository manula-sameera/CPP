#include <iostream>
#include <cstring>

using namespace std;

int sum(int x, int y){
	return x+y;
}
int sub(int x, int y){
	return x-y;
}
int mult(int x, int y){
	return x*y;
}
int div(int x, int y){
	return x/y;
}

int main(){
	
	string error;
	char op;
	int num1, num2, ans = 0;

	cout << "Enter the two Numbers with Operator (Eg: 5 + 1): "; cin >> num1 >> op >> num2;
	
	switch(op){
		case '+':
			ans = sum(num1,num2);
			break;
		case '-':
			ans = sub(num1, num2);
			break;
		case '*':
			ans = mult(num1, num2);
			break;
		case '/':
			ans = div(num1, num2);
			break;
		default:
			error = "Invalid Input";
			break;
	}
	
	if(error.empty()){
		cout << "Answer: " << ans << endl;
	}else{
		cout << error << endl;
	}
	return 0;
}