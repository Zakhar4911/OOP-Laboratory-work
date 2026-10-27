#pragma once
#include <iostream>

using namespace std;

class RightTriangle
{
private:
	double legA;
	double legB;

public:
	RightTriangle(double legA, double legB);

	double getLegA() const;
	double getLegB() const;
	double calculateHypotenuse() const;
	double calculateArea() const;
	double calculatePerimeter() const;
	void print(ostream& out) const;
};

