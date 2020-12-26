#include <iostream>

using namespace std;

int  sigma(int i) {
	int sum =2;
	
	for (int n = 1; n < INT_MAX; n++) {
		if (sum < INT_MAX) 
		{
		sum +=  (sum *2); 
		if ( n < 10)  cout << "2^" << n << "+";
		//cout << sum << endl;
		}
		else {
			cout << "................2^ " << n  << " = " ;
		break;
		}
	}
	
	//cout << sum << endl;
	return sum;

}

int initSum=2;
int Total=0;

double s=0;
double t=0.5;
int sigma1(int i)
{
	initSum *=2;
	Total += initSum;
	cout <<  i  << " + "  << initSum << " = " << Total << endl;

	s=1 /(double)initSum;
	t += s;
	cout << i << " + " <<s << " = " << t << endl;


	if (0 < Total && Total <INT_MAX) 
		return sigma1(i + 1);
	else {
		cout << i << " + " << initSum << " = " << Total << endl;
		return 0;
	}
	return 0;
}

double dinitSum = 2.0;
double dTotal = 0.0;

double ds=0;
double dt=0.5;
int sigmaDbl(int i)
{
	dinitSum = dinitSum * 2.0;
	dTotal = dTotal + dinitSum;
	cout << i << " + " << dinitSum << " = " << dTotal << endl;

	ds=1/dinitSum;
	dt += ds;
	cout << i << " + " << ds << " = " << dt << endl;


	//if (0 < dTotal && dTotal < 4.1943e+06)
	if (0 < dTotal && dTotal < DBL_MAX)
		return sigmaDbl(i + 1);
	else {
		cout << i << " + " <<dinitSum << " = " << dTotal << endl;
		return 0;
	}
	return 0;
}
int main()
{
	int sum;

	cout << INT_MAX << endl;

	cout << "Sigma sum : " ;
	sum=sigma1(1);

	cout << "=============================================" << endl << endl;
	cout << DBL_MAX << endl;
	sigmaDbl(1);

	return 0;
}