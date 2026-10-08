#include "matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix(int r, int c) {
	rows = r;
	cols = c;
	v = new Vector[rows];
	for (int i = 0; i < rows; i++)
		v[i].setSize(cols);
}

Matrix::~Matrix() {
	delete[] v;
}

void Matrix::setElement(int i, int j, double value) {
	if (i < 0 || i >= rows || j < 0 || j >= cols) {
		throw out_of_range("Помилка індекс виходить за межі матриці");
	}

	v[i].setElement(j, value);
}

double Matrix::getElement(int i, int j) {
	return v[i].getElement(j);
}

void Matrix::fillRandom() {
	for (int i = 0;i < rows;i++)
		v[i].fillRandom();
}

void Matrix::print() {
	for (int i = 0; i < rows;i++)
		v[i].print();
}

void Matrix::add(Matrix& B, Matrix& result) {
	for (int i = 0;i < rows;i++)
		for (int j = 0;j < cols;j++)
			result.setElement(i, j, getElement(i, j) - B.getElement(i, j));
}

void Matrix::subtract(Matrix& B, Matrix& result)
{
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			result.setElement(i, j, getElement(i, j) - B.getElement(i, j));
}

void Matrix::multiplyVector(Vector& x, Vector& result)
{
	for (int i = 0; i < rows; i++)
	{
		double sum = 0;
		for (int j = 0; j < cols; j++)
			sum = sum + getElement(i, j) * x.getElement(j);
		result.setElement(i, sum);
	}
}

void Matrix::multiplyMatrix(Matrix& B, Matrix& result)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < B.cols; j++)
		{
			double sum = 0;
			for (int k = 0; k < cols; k++)
				sum = sum + getElement(i, k) * B.getElement(k, j);
			result.setElement(i, j, sum);
		}
	}
}

