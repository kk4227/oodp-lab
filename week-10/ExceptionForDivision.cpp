#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter two number: -\n";
	cin >> a >> b;
	try
	{
		if (b != 0)
			cout << "Division = " << a / b;
		else
			throw b;
	}
	catch (int i)
	{
		cout << "Exception caught: Division by Zero";
	}
	return 0;
}
