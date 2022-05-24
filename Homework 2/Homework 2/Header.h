#pragma once
#include <iostream>
#include <string>

using namespace std;
class K_digit 
{
	double a, b;
public:
	K_digit()
	{
		a = b = 0;
	}

	K_digit(double x)
	{
		a = x;
		b = 0;
	}

	K_digit(double x, double y)
	{
		a = x;
		b = y;
	}

	double Mod()
	{
		double M;
		M = pow((pow(a, 2) + pow(b, 2)), 0.5);
		return M;
	}

	K_digit operator +(const K_digit& X)
	{
		K_digit Sum;
		Sum.a = (a + X.a);
		Sum.b = (b + X.b);
		return Sum;
	}

	K_digit operator ++(int)
	{
		a++;
		b++;
		return *this;
	}

	K_digit operator =(K_digit X)
	{
		a = X.a;
		b = X.b;
		return *this;
	}

	friend bool operator ==(const K_digit& X1, const K_digit& X2);

	// Это прототип функции.
	friend K_digit operator -(const K_digit& X1, const K_digit& X2);

	friend void operator --(K_digit& X, int);

	friend bool operator >(const K_digit& X1, const K_digit& X2);

	friend ostream& operator <<(ostream& out, K_digit& X);

	friend istream& operator >>(istream& in, K_digit& X);

};
// Это описание дружественной функции - она НЕ метод класса.
K_digit operator -(const K_digit& X1, const K_digit& X2)
{
	K_digit Dif;
	Dif.a = (X1.a - X2.a);
	Dif.b = (X1.b - X2.b);
	return Dif;
}

void operator -- (K_digit& X, int)
{
	X.a--;
	X.b--;
}

bool operator ==(const K_digit& X1, const K_digit& X2)
{
	return (fabs(X1.a - X2.a) < 0.0001 && fabs (X1.b - X2.b) < 0.0001);
}

bool operator >(K_digit& X1, K_digit& X2)
{
	return(X1.Mod() > X2.Mod());
}

ostream & operator <<(ostream& out, K_digit& X)
{
	if (X.b < 0)
		out << X.a << X.b << "i" << endl;
	else
		out << X.a << "+" << X.b << "i" << endl;
	return out;
}
istream & operator >>(istream& in, K_digit& X)
{
	cout << "Введите действительную часть комплексного числа: ";
	in >> X.a;
	cout << "Введите мнимую часть комплексного числа: ";
	in >> X.b;
	return in;
}