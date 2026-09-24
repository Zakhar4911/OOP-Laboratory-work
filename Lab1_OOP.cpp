#include <iostream>
#include "Calculation.h"

using namespace std;

int main()
{
	double x = 0.48 * 11;
	double y = 0.47 * 11;
	double z = -1.32 * 11;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << endl;

	Calculation obj(x, y, z);

	cout << "a = " << obj.funcA() << endl;
	cout << "b = " << obj.funcB() << endl;

	cout << "   x   |     a      |     b" << endl;
	cout << "----------------------------------" << endl;

	double xn = -1;
	double dx = 0.2;

	for (int i = 0;i <= 10;i++) {
		double xi = xn + i * dx;

		obj.setX(xi);

		double ai = obj.funcA();
		double bi = obj.funcB();

		cout << xi << "   |   " << ai << "   |   " << bi << endl;
	}

	cout << "Average:" << obj.avarage() << endl;


	Student s;
	Student& ref = s;

	Student* p = &s;
	cout << p->age << endl;

	ref.age = 19;
	cout << s.age;

	return 0;
}
