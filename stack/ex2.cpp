#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
 int option;
	//create stack object 
	Stack s1;

    do{
		cout << "\nSelect Option number." << endl;
		cout << "0: Exit" << endl;
		cout << "1: Push" << endl;
		cout << "2: Pop" << endl;
		cout << "3: isEmpty" << endl;
		cout << "4: isFull" << endl;
		cout << "5: Peek" << endl;
		cout << "6: Size" << endl;
		cout << "7: Count" << endl;
		cout << "8: Display" << endl;
		cout << "9: Clear Screen" << endl;
		cin >> option;
        switch (option){
		case 0:
			break;
		case 1:
			s1.push();
			break;
		case 2:
			s1.pop();
			break;
		case 3:
			if (s1.isEmpty())
				cout << "Stack is Empty." << endl;
			else
				cout << "Stack is not Empty." << endl;
			break;
		case 4:
			if (s1.isFull())
				cout << "Stack is Full." << endl;
			else
				cout << "Stack is not Full." << endl;
			break;
		case 5:
			s1.peek();
			break;
		case 6:
			s1.size();
			break;
		case 7:
			s1.count();
			break;
		case 8:
			s1.display();
			break;
		case 9:
			system("cls");
			break;
		default:
			system("Invalid option");
			break;
		}
        } while (option != 0);



	system("pause");
	return 0;
}



}