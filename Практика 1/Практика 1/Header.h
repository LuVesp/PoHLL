#pragma once
#include <iostream>

using namespace std;

	class Triangle {
		float a, b, c;	    // Стороны
		bool Check()
		{
			return (a + b > c && a + c > b && b + c > a);

		};      // Проверить условие. 
	public:	Triangle() {
		a = b = c = 0;
	}
			Triangle(float a1, float b1, float c1) {
				a = a1;
				b = b1;
				c = c1;
				if (!Check())
					Input();
			}
			Triangle(float x) {
				a = b = c = x;
			}

	public:
		void Input()
		{
			do
			{
				cout << "Введите стороны треугольника через пробел: ";
				cin >> a >> b >> c;
			}
			while(!Check());

		};      // Ввести. 
		void Out()
		{
			cout << "Стороны треугольника: " << a << " " << b << " " << c << "\n";
		};        // Вывести.
		float P()
		{
			float P = a + b + c;
			return P;
		};         // Периметр.
		float S()
		{
			float p = (a + b + c) / 2;
			float S = pow((p * (p - a) * (p - b) * (p - c)),0.5);
			return S;
		};         // Площадь.

	};