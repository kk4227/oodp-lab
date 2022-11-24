#include <iostream>
using namespace std;
template <class A, class B>
void sqr(A a, B b)
{
	A x;
	B y;
	x = a;
	y = b;

	cout << x * x << endl
		 << y * y;
}
int main()
{
	sqr(5, 2.5);
	return 0;
}