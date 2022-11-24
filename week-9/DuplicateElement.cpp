#include <iostream>
using namespace std;
template <class A>

A dup(A arr)
{
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			cout << arr[i];
		}
	}
	return 0;
}
int main()
{
	int arr[5] = {1, 2, 2, 3, 4};
	dup(arr);
	return 0;
}