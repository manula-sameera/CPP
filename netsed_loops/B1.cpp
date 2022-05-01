#include <iostream>

using namespace std;

void a()
{
	int a = 10 + 20;
}

int main()
{
	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "@";
		}
		cout << endl;
	}
	return 0;
}