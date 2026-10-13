#pragma once
#include <string>

using namespace std;

class Rectangle
{
private:
	double sideA;
	double sideB;

public:
	Rectangle();
	Rectangle(double a, double b);

	void setSides(double a, double b);
	double getSideA() const;
	double getSideB() const;

	double calculateDiagonal();
	double calculatePerimeter();
	double calculateArea();
	double calculateArea(double a, double b);

	void print();
	void print(string title);

	Rectangle& operator++();
	Rectangle& operator--();

	Rectangle operator+(const Rectangle& other) const;
};

