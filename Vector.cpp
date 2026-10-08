#include "Vector.h"
#include <iostream>

using namespace std;

Vector::Vector() {
	n = 0;
	a = NULL;
}

Vector::Vector(int size) {
	n = size;
	a = new double[n];
	for (int i = 0;i < n;i++)
		a[i] = 0;
}

Vector::~Vector() {
	delete[] a;
}

void Vector::setSize(int size) {
	delete[] a;
	n = size;
	a = new double[n];
	for (int i = 0;i < n;i++)
		a[i] = 0;
}

int Vector::getSize() {
	return n;
}

void Vector::setElement(int i, double value) {
	a[i] = value;
}

double Vector::getElement(int i) {
	return a[i];
}

void Vector::fillRandom() {
	for (int i = 0; i < n; i++)
		a[i] = (rand() % 100) / 10;
}

void Vector::print() {
	for (int i = 0; i < n;i++)
		cout << a[i] << "\t";
	cout << endl;

}


