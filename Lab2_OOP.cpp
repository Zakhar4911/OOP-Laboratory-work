#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include "matrix.h"
#include "vector.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    srand(time(0));

    int n;
    cout << "Введіть розмір матриць (n x n):";
    cin >> n;

    Matrix A(n, n);
    Matrix B(n, n);
    Vector x(n);

    A.fillRandom();
    B.fillRandom();
    x.fillRandom();

    cout << endl << "Матриця A:" << endl;
    A.print();
    cout << endl << "Матриця B:" << endl;
    B.print();
    cout << endl << "Вектор x:" << endl;
    x.print();

    Matrix sum(n, n);
    Matrix diff(n, n);
    Matrix prod(n, n);
    Vector res(n);

    A.add(B, sum);
    cout << endl << "A + B:" << endl;
    sum.print();

    A.subtract(B, diff);
    cout << endl << "A - B:" << endl;
    diff.print();

    A.multiplyVector(x, res);
    cout << endl << "A * x:" << endl;
    res.print();

    A.multiplyMatrix(B, prod);
    cout << endl << "A * B:" << endl;
    prod.print();


    try {
        A.setElement(n - 1, n - 1, 5);
    }
    catch(exception& e){
        cout << endl << e.what() << endl;
    }

    return 0;
}