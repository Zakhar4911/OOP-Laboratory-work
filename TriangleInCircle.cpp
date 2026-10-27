#include "TriangleInCircle.h"
#include <cmath>

using namespace std;

TriangleInCircle::TriangleInCircle(double legA, double legB) 
	: RightTriangle(legA, legB),
Circle(sqrt(legA * legA + legB * legB) / 2){}

void TriangleInCircle::print(ostream& out) const {
	out << "=== ѕр€мокутний трикутник, вписаний у коло ===" << endl;
	RightTriangle::print(out);
	cout << endl;
	Circle::print(out);
}
