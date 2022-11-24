#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter your Age: -\n";
	cin >> a;
	try
	{
		if (a > 0)
			cout << "Age = " << a;
		else
			throw a;
	}
	catch (int i)
	{
		cout << "Exception caught";
	}
	return 0;
}