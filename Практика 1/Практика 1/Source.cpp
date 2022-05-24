#include <iostream>
#include "Header.h"
#include <locale>

using namespace std;

void main(void)
{
	setlocale(LC_ALL, ".1251");
	Triangle Ravn;
	Ravn.Input();
	Triangle Proizv;
	Proizv.Input();
	Ravn.Out();
	cout << "Периметр = " << Ravn.P() << "\n";
	cout << "Площадь = " << Ravn.S() << "\n";
	Proizv.Out();
	cout << "Периметр = " << Proizv.P() << "\n";
	cout << "Площадь = " << Proizv.S() << "\n";

	Triangle* D;
	D = new Triangle;
	D = new Triangle(2, 3, 2);
	D->Out();
	cout << "Периметр = " << D->P() << "\n";
	cout << "Площадь = " << D->S() << "\n";

	Triangle A[2] = { Triangle(3,4,5), Triangle(3) };
	A[0].Out();
	A[1].Out();
	system("pause");
}