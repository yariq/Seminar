#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

class angle
{
	int degree;
public:
	angle ()
	{
		cout << "Vvedute ygol ";
		cin >> degree;
	}
	double cosinus ()
	{
		return cos(degree);
	}
};

int main ()
{
	angle _Angle;
	double answer = _Angle.cosinus();
	cout << "cos = " << answer;
	return 0;
}