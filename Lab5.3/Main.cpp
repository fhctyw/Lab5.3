#include <iostream>
#include <cmath>

using namespace std;
double p(const double x);
int main()
{
	double gp, gk, z;
	int n;
	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;
	double dg = (gk - gp) / n;
	double g = gp;
	while (g <= gk)
	{
		z = p(1 - g * g) + pow(p(1 + g - sqrt(p(g))), 2);
		cout << g << " " << z << endl;
		g += dg;
	}
	return 0;
}
double p(const double x)
{
	if (abs(x) >= 1)
		return (cos(sin(x)) + 1) / (exp(-x) + 1);
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = -x * x / ((3 * j - 2) * (3 * j - 1) * 3 * j);
			a *= R;
			S += a;
		} while (j < 4);
		return S;
	}
}