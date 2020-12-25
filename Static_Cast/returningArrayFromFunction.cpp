
#include <iostream>

using namespace std;

int* display(int a[]) {
	for (int i=0; i <=4; i++) {
		a[i] = a[i] +2;


	}
	return a;
}

int main()
{
	int arr[5]={4,5,6,7,8};
	int *x;
	x=display(arr);
	for (int i = 0; i < 5; i++) {
		cout << x[i] << endl;
	}


	return 0;
}