
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;




int main()
{
	[](){ };

	auto sayHelloWorld = []()
	{
	cout << "no" << endl;
	};

	sayHelloWorld();

	auto sayHelloWorld1 = [](int a, int b)
	{
		return a+b;
	};

	cout << sayHelloWorld1(190, 10) << endl;

	int i=10;
	int g=11;

	auto sayHelloWorld2 = [i, &g](int a, int b) -> int
	{
		g=200;
		return a + b + i + 200 ;
	};

	cout << sayHelloWorld2(190, 10) << endl;
	cout << i << " " << g << endl;

return 0;
}