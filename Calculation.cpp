#include "Calculation.h"
#include <cmath>;

double safePow(double base, double power) {
	if (base < 0)
		return -pow(-base, power);
	else
		return pow(base, power);
}

Calculation::Calculation() {
	x = 0;
	y = 0;
	z = 0;
}

Calculation::Calculation(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

void Calculation::setX(double x) {
	this->x = x;
}

double Calculation::funcB()
{
	double numerator = 1 + pow(cos(y - 2 * x * x * x), 2);
	double denominator = safePow(2 + pow(fabs(x), 1.5) - pow(sin(fabs(z)), 2), 0.2);

	return numerator / denominator + pow(log(fabs(z - y)), 2);
}

double Calculation::funcA()
{
	double b = funcB();

	double numerator = safePow(z + pow(sin(fabs(y + b)), 2), 1.3);
	double denominator = z * z + fabs((x * x + y) / (y + x * x * x / 3)) - log(fabs(z));

	return y * y + numerator / denominator;
}

double Calculation::avarage() {
	return (x + y + z) / 3;
}