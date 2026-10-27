#include "RightTriangle.h"
#include <cmath>
#include <stdexcept>

using namespace std;

RightTriangle::RightTriangle(double legA, double legB) {
	if (legA <= 0 || legB <= 0)
		throw invalid_argument("Помилка: катети мають бути більші за 0!");

	this->legA = legA;
	this->legB = legB;
}

double RightTriangle::getLegA() const {
	return legA;
}

double RightTriangle::getLegB() const {
	return legB;
}

double RightTriangle::calculateHypotenuse() const {
	return sqrt(legA * legA + legB * legB);
}

double RightTriangle::calculateArea() const {
	return legA * legB / 2;
}

double RightTriangle::calculatePerimeter() const {
	return legA + legB + calculateHypotenuse();
}

void RightTriangle::print(ostream& out) const {
	out << "Прямкотний трикутник:" << endl;
	out << "Катет a = " << legA << endl;
	out << "Катет b = " << legB << endl;
	out << "Гіпотенуза = " << calculateHypotenuse() << endl;
	out << "Площа = " << calculateArea() << endl;
	out << "Периметр = " << calculatePerimeter() << endl;
}