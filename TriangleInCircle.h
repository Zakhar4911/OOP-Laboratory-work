#pragma once
#include "Circle.h"
#include "RightTriangle.h"

class TriangleInCircle : public RightTriangle, public Circle
{
public:
	TriangleInCircle(double legA, double legB);

	void print(ostream& out) const;
};

