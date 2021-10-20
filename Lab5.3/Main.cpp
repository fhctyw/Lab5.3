// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями
// Варіант 13
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double Pi = 3.14159265359;

double g(const double x);

int main()
{
	double zp, zk, f;
	int n;
	cout << "zp = "; cin >> zp;
	cout << "zk = "; cin >> zk;
	cout << "n = "; cin >> n;
	double dz = (zk - zp) / n; 
	
	cout << fixed;
	cout << "--------------------" << endl;
	cout << setw(10) << "z  |" << setw(10) << "f  |" << endl;
	cout << "--------------------" << endl;

	for(double z = zp; z <= zk; z += dz)
	{
		f = g(2*z)+ pow(g(2*z+z*z), 2) + g(1.5);
		cout << setw(9) << setprecision(2) << z << "|" << setw(9) << setprecision(3) << f << "|" << endl;
	}
	cout << "--------------------" << endl;
	return 0;
}

double g(const double x)
{
	if (abs(x) >= 1)
		return sin(x) / (cos(x) + 2);
	else
	{
		double S = 0, a = 1;
		int n = 0;
		S = a;
		do
		{
			n++;
			a *= x * x / n;
			S += a;
		} while (n < 6);
		return S;
	}
}
