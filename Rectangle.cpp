#include "Rectangle.h"
#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

const double INCREASE_FACTOR = 1.1;
const double DECREASE_FACTOR = 0.9;

Rectangle::Rectangle() {
	sideA = 0;
	sideB = 0;
}

Rectangle::Rectangle(double a, double b) {
	setSides(a, b);
}

void Rectangle::setSides(double a, double b) {
	if (a <= 0 || b <= 0)
		throw invalid_argument("Помилка: сторони прямокутника мають бути більші за 0!");

	sideA = a;
	sideB = b;
}

double Rectangle::getSideA() const {
	if (sideA <= 0)
		throw logic_error("Помилка: сторони прямокутника ще не задані!");

	return sideA;
}

double Rectangle::getSideB() const {
	if (sideB <= 0)
		throw logic_error("Помилка: сторони прямокутника ще не задані!");

	return sideB;
}

double Rectangle::calculateDiagonal() {

	return sqrt(sideA + getSideB() * getSideB());
}

double Rectangle::calculatePerimeter() {
	return 2 * (getSideA() + getSideB());
}

double Rectangle::calculateArea() {
	return getSideA() * getSideB();
}

double Rectangle::calculateArea(double a, double b) {
	if (a <= 0 || b <= 0)
		throw invalid_argument("Помилка: сторони прямокутника не мають бути більші за 0!");
	
	return a * b;
}

void Rectangle::print() {
	cout << "Сторона а = " << getSideA() << endl;
	cout << "Сторона b = " << getSideB() << endl;
	cout << "Діагональ = " << calculateDiagonal() << endl;
	cout << "Периметр = " << calculatePerimeter() << endl;
	cout << "Площа = " << calculateArea() << endl;
}

void Rectangle::print(string title) {
	cout << "--- " << title << " ---" << endl;
	print();
}

Rectangle& Rectangle::operator++() {
	setSides(getSideA() * INCREASE_FACTOR, getSideB() * INCREASE_FACTOR);
	return *this;
}

Rectangle& Rectangle::operator--() {
	setSides(getSideA() * DECREASE_FACTOR, getSideB() * DECREASE_FACTOR);
	return *this;
}

Rectangle Rectangle::operator+(const Rectangle& other) const
{
	return Rectangle(getSideA() + other.getSideA(), getSideB() + other.getSideB()); // :: . .*
}