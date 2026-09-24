#pragma once
class Calculation
{
private:
	double x, y, z;

public:
	Calculation();
	Calculation(double x, double y, double z);

	void setX(double x);

	double avarage();

	double funcA();
	double funcB();
};

class Student {
public:
	int age = 18;
};

