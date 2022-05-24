#pragma once
#include <iostream>
#include <string>
using namespace std;

const double pi = 3.14159265358979323846;
class MyBall {
protected:
	double Rad;
public:
	MyBall() {			// Пустой конструктор.
		Rad = 0;
	}
	MyBall(double R) {	// Шар заданного радиуса.
		Rad = R;
	}
	double V() {			// Найти объём.
		return 4.0/3.0*pi*pow(Rad,3);
	}
	friend istream& operator >> (istream& in, MyBall& A);
	friend ostream& operator << (ostream& out, MyBall A);
};
istream& operator >> (istream& in, MyBall& A) {
	cout << "Введи радиус: ";
	in >> A.Rad;
	return in;
}
ostream& operator << (ostream& out, MyBall A) {
	out << "R = " << A.Rad << endl;
	return out;
}

class Detail : public MyBall {
	string material;
	double density;		// Угол в градусах.
	// Все конструкторы сектора
public:
	Detail()
	{
		material = "";
		density = 0;
	};		
	Detail(string m,  double d)
	{
		material = m;
		density = d;
	};		
	Detail(double R, string m, double d) :MyBall(R)
	{
		material = m;
		density = d;
	};		
	Detail(MyBall B, string m, double d) :MyBall(B)
	{
		material = m;
		density = d;
	};

	double mass()
	{
		double V = 4.0 / 3.0 * pi * pow(Rad, 3);
		return density*V;
	}

	friend istream& operator >> (istream& in, Detail& A);
	friend ostream& operator << (ostream& out, Detail& A);
	friend bool operator == (Detail& A, Detail& B);
	friend bool operator > (Detail& A, Detail& B);
	friend bool operator < (Detail& A, Detail& B);
};

istream& operator >> (istream& in, Detail& A) {
	cout << "Введи радиус детали: ";
	in >> A.Rad;
	cout << "\nВведи материал детали: ";
	in >> A.material;
	cout << "\nВведи плотность детали: ";
	in >> A.density;
	return in;
}
ostream& operator << (ostream& out, Detail& A) {
	out << "R = " << A.Rad << "\tМатериал: " << A.material << "\tПлотность = " << A.density << endl;
	return out;
}

bool operator == (Detail& A, Detail& B)
{
	return (fabs(A.Rad - B.Rad) < 0.0001);
}

bool operator > (Detail& A, Detail& B)
{
	return (A.Rad > B.Rad);
}

bool operator < (Detail& A, Detail& B)
{
	return (A.Rad < B.Rad);
}