#pragma once
#include <iostream>
#include <string>
using namespace std;
class My_point
{
	double x, y;
public:
	My_point()
	{
		x = y = 0;
	}
	My_point(double xx, double yy)
	{
		x = xx;
		y = yy;
	}
	void Out()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
	void Input()
	{
		cout << "Input Coordinate ";
		cin >>  x >>  y ;
	}
	string Out_()
	{
		string Text;
		Text = "(" + std::to_string(x) + "," + std::to_string(x) + ")" + "\n";
		return Text;
	}

	double Rvector()
	{
		double R = pow(pow(x, 2) + pow(y, 2), 0.5);
		return R;
	}

	My_point operator +(const My_point &T)
	{
		My_point Sum;
		Sum.x = (x + T.x)*0.5;
		Sum.y = (y + T.y)*0.5;
		return Sum;
	}

	My_point operator --(int)
	{
		x--;
		y--;
		return *this;
	}

	My_point operator =(const My_point T)
	{
		x = T.x;
		y = T.y;
		return *this;
	}

	friend bool operator ==(const My_point& T1, const My_point & T2);

// Это прототип функции.
	friend double operator -(const My_point &T1, const My_point &T2);

	friend void operator ++(My_point& T, int);

	friend bool operator >(const My_point& T1, const My_point& T2);

	
};
// Это описание дружественной функции - она НЕ метод класса.
double operator -(const My_point &T1, const My_point &T2)
{
	double Dif = sqrt(pow(T1.x - T2.x, 2) + pow(T1.y - T2.y, 2));
	return Dif;
}

void operator ++ (My_point& T, int)
{
	T.x++;
	T.y++;
}

bool operator ==(const My_point& T1, const My_point& T2)
{
	return (fabs(T1.x == T2.x)<0.0001 && fabs(T1.y - T2.y) < 0.0001);
}

bool operator >(My_point& T1, My_point& T2)
{
	return (T1.Rvector() > T2.Rvector());
}

