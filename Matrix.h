#pragma once
#include "Vector.h"

using namespace std;

class Matrix
{
private:
	int rows;
	int cols;
	Vector* v;

public:
	Matrix(int r, int c);
	~Matrix();

	void setElement(int i, int j, double value);
	double getElement(int i, int j);
	void fillRandom();
	void print();

	void add(Matrix& B, Matrix& result);
	void subtract(Matrix& B, Matrix& result);
	void multiplyVector(Vector& x, Vector& result);
	void multiplyMatrix(Matrix& B, Matrix& result);
};

