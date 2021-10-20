#include <iostream>
#include <cmath>
using namespace std;

double g(const double x);

int main()
{
	double zp, zk, f;
	int n;
	cout << "gp = "; cin >> zp;
	cout << "gk = "; cin >> zk;
	cout << "n = "; cin >> n;
	double zg = (zk - zp) / n;
	cout << zg << endl;
	double z = zp;
	while (z <= zk)
	{
		//f = g(2*z)+ pow(g(2*z+z*z), 2) + g(1.5);
		f = g(z);
		cout << z << " " << f << endl;
		z += zg;
	}
	return 0;
}

int factorial(int n)
{
	if (n > 1)
		return n * factorial(n - 1);
	else
		return 1;
}

double g(const double x)
{
	if (abs(x) >= 1)
	{
		return sin(x) / (cos(x) + 2);
	}
	else
	{
		double S = 0, a = 1;
		int n = 0;
		S = a;
		do
		{
			n++;
			double R = (pow(x, 2. * n) / factorial(n)) / (pow(x, 2. * (1.*n - 1)) / factorial(n - 1));
			a *= R;
			S += a;
		} while (n < 6);
		return S;
	}
}
