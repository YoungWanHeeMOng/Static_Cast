
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int a1=10;
	const int *b1=&a1;
	int *d1=const_cast<int*>(b1);
	*d1=15;

	cout << a1 << " " << *d1 << endl;

	int a2=20;
	const int *b2=&a2;
	int *d2=const_cast<int*>(b2);
	*d2=20;

	cout << a2 << " " << *d2 << endl;
}