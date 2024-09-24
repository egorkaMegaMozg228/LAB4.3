#include <iostream>
#include <cmath>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, xp, xk, dx, a, b, c, F,q,l,m;
	q = 7;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "----------------------------" << endl;
	cout << "|" << setw(6) << "x" << setw(q)<<"|"
		<< setw(7) << "F" << "     |" << endl;
	cout << "----------------------------" << endl;
	x = xp;

	
	while (x <= xk)
	{
		if (x < 0 && b != 0)
			F = a - (x / (10 + b));
		else
			if (x > 0 && b == 0)
				F = (x - a) / (x - c);
			else
				F = 3 * x + 2 / c;
		cout << "|" << setw(6) << setprecision(2) << x
			<< setw(q) << "| " << setw(7) << setprecision(2) << F
			<< "     |" << endl;
		x += dx;
		
	}
	cout << "----------------------------" << endl;



	system("pause");
	return 0;

}