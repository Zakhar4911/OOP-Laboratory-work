#pragma once
#include <iostream>

using namespace std;

class Circle
{
private:
	double radius;

public:
	Circle(double radius);

	double getRadius() const;
	double calculateArea() const;
	double calculateCircumference() const;
	void print(ostream& out) const;
};

