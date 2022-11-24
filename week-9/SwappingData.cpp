#include <iostream>
using namespace std;
template <class A, class B>
void swap(A a, B b)
{
	A temp, x;
	B y;
	x = a;
	y = b;
	temp = x;
	x = y;
	y = temp;
	cout << "swapped output:" << x << " " << y;
}
int main()
{
	swap(5, 'b');
	return 0;
}