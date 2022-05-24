#pragma once
#include <iostream>
using namespace std;

class Vector {
private:
	float x1, y1; //���������� ������ �������                       //��������� ��� ���������
	float x2, y2; //���������� ����� �������
public:
	Vector()  //������� �����������
	{
		x1 = x2 = y1 = y2 = 0;
	};

	Vector(float a, float b, float c, float d) //����������� ������������� �������
	{
		x1 = a;
		y1 = b;
		x2 = c;
		y2 = d;
	};

	Vector operator =(Vector X)  //����������� ���������� ������ ������� �������
	{
		x1 = X.x1;
		x2 = X.x2;
		y1 = X.y1;
		y2 = X.y2;
		return *this;
	}

	Vector change(Vector A)  //����� ���������� ������, ������������ ���� ����������� ������ �������� ������� � ������ ���������� ������� (��������� ��� ������ � �����)
	{
		Vector B;
		B.x1 = A.x1;  
		B.y1 = A.y1;
		B.x2 = x2 - x1 + A.x1;
		B.y2 =y2 - y1 + A.y1;
		return B;
	}

	double Len()
	{
		return (pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5));  //��������� ����� �������
	}
	
	friend istream& operator >> (istream& in, Vector& A);
	friend ostream& operator << (ostream& out, Vector& A);
	friend Vector operator +(const Vector& A, const Vector& B);

	friend bool operator ==(const Vector& A, const Vector& B); // - � ������, �� ��� ��������, ����� ������������ �������� ������� �� ����� ����������� �����������
};


istream& operator >> (istream& in, Vector& A) {
	cout << "������� ���������� ������ �������: ";
	in >> A.x1 >> A.y1;
	cout << "������� ���������� ����� �������: ";
	in >> A.x2 >> A.y2;
	cout << "\n";
	return in;
}
ostream& operator << (ostream& out, Vector& A) {
	out << "\n���������� ������ ������� " << ": (" << A.x1 << "," << A.y1 << ")\n";
	out << "���������� ����� ������� " << ": (" << A.x2 << "," << A.y2 << ")\n";
	cout << "\n";
	return out;
}
bool operator ==(const Vector& A, const Vector& B)
{
	return (A.x1 == B.x1 && A.y1 == B.y1 && A.x2 == B.x2 && A.y2 == B.y2);
}

Vector operator +(const Vector& A, const Vector& B) //�������� ���������� ������ � ����� �������, ������������ � ���� �������� ���� �������� ��������
{
	Vector C;
	C.x1 = A.x1;
	C.y1 = A.y1;
	double dx = A.x2 - B.x1;
	double dy = A.y2 - B.y1;
	C.x2 = B.x2 + dx;
	C.y2 = B.y2 + dy;
	return C;
}

class Many {
	
private:
	Vector A[10];
	int len;

public:

	Many()
	{
		len = 0;
	}
	 
	bool Add(Vector B) //��������� ��������� ������ � ����� ������� �����     //����� ���������. ������ ���������� ���������� ��������. ���������� ����� � ���� ��������� ������ ������ ����
	{
		int j=true;
		if (len == 10)
			j = false;
			else
			{
				if (len == 0) //���� � ����� ��� ��������, �� ������ ����������� ������ ���������� ������ �������� �����
				{
					A[0] = B;  
				}
				else
				{
					A[len] = B.change(A[0]);
				}
			}
			len++;
			return j;
	}

	void Delete(Vector B) //������� ���� �� �������� � ��������� �������  //������� ��������� ������ ���� �������� "�� ��������"
	{
		int poz;
		Vector P;
		if (B == A[0])
			poz = 0;
		else
		{
			P = B.change(A[0]);
			for (int i = 0; i < len; i++)
			if (P == A[i])
				poz = i;
		}
		for (int i = poz; i < len-1; i++)
		{
			A[i] = A[i + 1];
		}
		len--;
	}

	void Out()
	{
		cout << "����� ��������: " << endl;
		for (int i = 0; i < len; i++)
		{
			cout << A[i];  //���������� � ����� ���������������� �����
		}
	}

	Vector Summ()
	{
		Vector S=A[0];
		for (int i = 1; i < len; i++)
			S = S + A[i];
		return S;
	}

};

