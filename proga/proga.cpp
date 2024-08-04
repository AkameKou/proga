#include <iostream>
using namespace std;
int main()
{
	int n1, n2;
	char c;
	cout << "Enter expression: ";
	cin >> n1 >> c >> n2;
	switch (c)
	{
	case '+':
		cout << "Result is " << n1 + n2;
		break;
	case '-':
		cout << "Result is " << n1 - n2;
		break;
	case '*':
		cout << "Result is " << n1 * n2;
		break;
	case '/':
		cout << "Result is " <<  n1 / n2;
		break;
	}
}

