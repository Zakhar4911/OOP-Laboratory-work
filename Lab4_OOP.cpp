#include <iostream>
#include <fstream>
#include <stdexcept>
#include "TriangleInCircle.h"
#include <direct.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian");

	try {
		TriangleInCircle figure(3, 4);

		figure.print(cout);

		cout << endl;
		cout << "Площа трикутника = " << figure.RightTriangle::calculateArea() << endl;
		cout << "Площа круга = " << figure.Circle::calculateArea() << endl;

		ofstream file("figure_info.txt");
		if (!file.is_open()) {
			cout << "Помилка: не вдалося відкрити файл!" << endl;
			return 1;
		}

		figure.print(file);
		file.close();

		cout << endl << "Інформацію записано у файл figure_info.txt" << endl;
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}

	return 0;
}