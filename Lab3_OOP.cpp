#include <iostream>
#include <stdexcept>
#include "Rectangle.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian");

	Rectangle rect(3, 4);
	rect.print("Початковий прямокутник");

	++rect;
	cout << endl;
	rect.print("Після ++ (Збільшення на 10%)");

	--rect;
	--rect;
	cout << endl;
	rect.print("Після двох -- (Зменшили вдвічі на 10%)");

	cout << endl;
	cout << "Площа прямокутника 5 х 6 = " << rect.calculateArea(5, 6) << endl;

	cout << endl << "--- Перевірка винятків ---" << endl;
	try {
		rect.setSides(-2, 5);
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}

	try {
		Rectangle empty;
		cout << empty.getSideA() << endl;
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
	Rectangle empty1;
	empty1.getSideA();

	Rectangle first(2, 3);
	Rectangle second(4, 5);
	Rectangle sum = first + second;
	cout << endl;
	sum.print("first + second");

	return 0;
}
