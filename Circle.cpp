#include "Circle.h"
#include <stdexcept>

using namespace std;

const double PI = 3.14159265358979;

Circle::Circle(double radius) {
	if (radius <= 0)
		throw invalid_argument("Помилка: радіус має бути більшим за 0!");

	this->radius = radius;
}

double Circle::getRadius() const {
	return radius;
}

double Circle::calculateArea() const {
	return PI * radius * radius;
}

double Circle::calculateCircumference() const {
	return 2 * PI * radius;
}

void Circle::print(ostream& out) const {
	out << "Коло:" << endl;
	out << "Радіус = " << radius << endl;
	out << "Площа = " << calculateArea() << endl;
	out << "Довжина кола = " << calculateCircumference() << endl;
}
