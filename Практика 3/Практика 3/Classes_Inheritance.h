#pragma once
#include <iostream>
using namespace std;

const double pi = 3.14159265358979323846;
class MyCircle {	// ��������� ��������� � ����� ������
protected:	
	double Rad;
public:
	MyCircle() {			// ������ �����������.
		Rad = 0;
	}
	MyCircle(double R) {	// ���� ��������� �������.
		Rad = R;
	}
	MyCircle(MyCircle &C) {	// ����� ����� �.
		Rad = C.Rad;
	}
	double S() {			// ����� �������.
		return 3.14*Rad*Rad;
	}
friend istream  &operator >> (istream   &in, MyCircle &A);
friend ostream &operator << (ostream &out, MyCircle A);
};
istream & operator >> (istream &in, MyCircle &A) {
	cout << "\n����� ������: " << endl;
	in >> A.Rad;
	return in;
}
ostream & operator << (ostream &out, MyCircle A) {
	out << "R = " << A.Rad << endl;
	return out;
}

class Sector : public MyCircle {
	int Angle;		// ���� � ��������.
	// ��� ������������ �������
public:
	Sector()
	{
		Angle = 0;
	};		// Angle = 0
	Sector(int A)
	{
		Angle = A;
	};		// Angle = A
	Sector(double R, int A) :MyCircle(R)
	{
		Angle = A;
	};		// �������� ����������� MyCircle.
	Sector(MyCircle& C, int A) :MyCircle(C)
	{
		Angle = A;
	};	// �������� ����������� �����.

	double S()
	{
		double radian = double(Angle) / 180 * pi;
		double S = (radian * pow(Rad, 2)) / 2;
		return S;
	}

	friend istream& operator >> (istream& in, Sector& A);
	friend ostream& operator << (ostream& out, Sector& A);
	friend bool operator == (Sector& A, Sector& B);
	friend bool operator > (Sector& A, Sector& B);
};

istream& operator >> (istream& in, Sector &A) {
	cout << "\n����� ������ � �������� ���� �������: " << endl;
	in >> A.Rad >> A.Angle;
	return in;
}
ostream& operator << (ostream& out, Sector& A) {
	out << "R = " << A.Rad << " Angle = " << A.Angle << endl;
	return out;
}

bool operator == (Sector& A, Sector& B)
{
	return (A.Angle == B.Angle && fabs(A.Rad-B.Rad)  < 0.0001);
}

bool operator > (Sector& A, Sector& B)
{
	return (A.S() > B.S());
}