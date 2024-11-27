#include<iostream>
using namespace std;
int main()
{
	long double xn, xn1, a;
	cin >> a;
	xn = a;
	while (1)
	{
		xn1 = (xn + a / xn) / 2;
		if (abs(xn1 - xn) < 10e-5)
		{
			break;
		}
		xn = xn1;
	}
	cout << xn1;
}