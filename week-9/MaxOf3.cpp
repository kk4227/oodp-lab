#include <iostream>
using namespace std;
template <class A, class B>
void max(A a, B b, B c)
{
	if (a > b && a > c)
	{
		cout << a;
	}
	else if (b > a && b > c)
	{
		cout << b;
	}
	else if (c > a && c > b)
	{
		cout << c;
	}
}
int main()
{
	max(1, 2.5, 3.5);
	return 0;
}