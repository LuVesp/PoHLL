#pragma once
#include <iostream>

using namespace std;

class Uravnenie {
	float a, b, c;	    // коэффициенты уравнения
	bool Check() {
		return (a != 0);
	};      // Проверить равенство коэффициента а нулю

public:
	Uravnenie()
	{
		a = b = c = 0;
	}

	Uravnenie(float a1, float b1, float c1)
	{
		a = a1;
		b = b1;
		c = c1;
		if (!Check())
			Input();
	}


public:
	void Input()
	{
		do
		{
			cout << "Введите коэффициенты уравнения: ";
			cin >> a >> b >> c;
		} while (!Check());
	}; // Ввести. 

	void Out()
	{
		cout << "Коэффициенты уравнения: a = " << a << " b = " << b << " c = " << c << "\n";
	};        // Вывести.

	bool Korni(float &x1, float &x2)
	{
		int p = 0;
		float D = pow(b, 2) - 4 * a * c;
		float d = pow(D, 0.5);
		if (D < 0)
			p = 1;
		else if (fabs(D) <=0.000001)
			x1 = x2 = (-b + pow(D,0.5))/(2 * a);
		else
		{
			x1 = (-b - d) / (2 * a);
			x2 = (-b + d) / (2 * a);
		}
		return p;
	};         
};

