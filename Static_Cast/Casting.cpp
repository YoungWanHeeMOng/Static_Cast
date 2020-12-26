
#include <iostream>

using namespace std;

class Base {
	public:
		Base() { }
		virtual ~Base() { }

};

class Derived : public Base
{
	public:
		Derived() { }
		~Derived() { }

};

class AnotherClass : public Base
{
public:
	AnotherClass() { }
	~AnotherClass() { }

};

int main()
{
	int a = 5;
	double value = a + 5.3;

	cout << value << endl;

	Derived* derived = new Derived();
	Base* base = derived;

	AnotherClass* ac=dynamic_cast<AnotherClass*>(base);

	if (ac)
	{
		cout << "True" << endl;
	} else cout << "False" << endl;
	

return 0;
}