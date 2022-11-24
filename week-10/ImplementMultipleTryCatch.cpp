#include <iostream>
using namespace std;
int main()
{
	int a, b;
	float d;
	cout << "Enter two numbers: -\n";
	cin >> a >> b;
	try
	{
		if (b != a)
		{
			d = float(a / b);

			if (d <= 0)
				throw 'e';
			cout << d;
		}
		else
			throw b;
	}
	catch (int i)
	{
		cout << "Exception caught: Division by zero";
	}
	catch (char st)
	{
		cout << "Exception caught: Division is less than 1";
	}
	return 0;
}