#include <iostream>
using namespace std;
template <class A, class B>
void sum(A a, B b)
{
	A sum, x;
	B y;
	x = a;
	y = b;
	sum = x + y;
	cout << sum;
}
int main()
{
	sum(5, 'd');
	return 0;
}