#pragma once

using namespace std;

class Vector
{
private:
	int n;
	double* a;

public:
	Vector();
	Vector(int size);
	~Vector();

	void setSize(int size);
	int getSize();
	void setElement(int i, double value);
	double getElement(int i);
	void fillRandom();
	void print();
};

