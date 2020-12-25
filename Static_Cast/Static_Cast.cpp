// Static casr in C++

#include <iostream>
#include <string>

using namespace std;

class Int
{
	int x;
	public:
		Int(int x=0) : x{x}  { cout << "conversion constructor" << endl;}
		operator string() {
			cout << "conversion operator" << endl;
			return   to_string(x);
		}
};
//
//int main()
//{
//	float f=3.5f;
//	int a;
//
//	a=f;
//	a=static_cast<int>(f);
//
//	cout << a << endl;
//
//	/////////////////////////////////////////////////////////////////////
//	Int obj(3);
//
//	string str1=obj;
//	obj=20;
//
//	string str2=static_cast<string>(obj);
//	obj=static_cast<Int>(30);
//
//	cout << str1 << " " << str2 << endl;
//
//
//return 0;
//}


class Base{};
class Derived: public Base{};
class Derived2 : public Base {};
int main()
{
	char c;
	int *p=(int*)&c;
	*p=5;
	cout << p  << endl;
	cout << *p << endl;
	////////////////////////////////////////

	Derived d1;
	Derived2 d2;
	Base *bp1=(Base *) (&d1);
	Base *bp2=static_cast<Base *> (&d1);
	Base* bp3 = static_cast<Base*> (&d2);
	
	cout << bp1 << " " << bp2 << endl;
	cout << bp2 << " " << bp3 << endl;

	Derived *d1p=static_cast<Derived*> (bp3);
	Derived2* d2p = static_cast<Derived2*> (bp1);

	cout << d1p << " " << d2p << endl;

	/// /////////////////////////////////////////////////////////////////
	int i=10;
	void *v=static_cast<void*>(&i);
	int *ip=static_cast<int*>(v);

	cout << v << " " << ip << endl;





	return 0;
}