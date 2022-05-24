//---------------------------------------------------------------------------
/* ����������� ������.
1. � ������� � ����������� ������� ��������� ������ � ����� � ��� �� 
������, ����� � �����������.
2. ��������� �� ������ �������� ������ (A *a) ����� ��������� �� ������ 
������������ ������, ��� ���� ����������� �������������� ���������� 
� ������������ � ��������� �������������� �����. */
#include <iostream>
using namespace std;
class Figure {
protected:
	int x, y;	// ��������.
public:
	Figure() {
		 x = y = 0;
	}
	Figure(int x2, int y2) {
		x = x2;
		y = y2;
	}
	virtual void Out(void) = 0;
	virtual float S() = 0;
	void Out_Base() {
		cout << " x= " << x << " y=" << y << endl;
	}

	bool operator > (Figure& A)
	{
		return this->S() > A.S();
	}
};


class Point_ : public Figure {
public:
	Point_()
	{
		x = y = 0;
	};
	Point_(int x2, int y2) {
		x = x2;
		y = y2;
	}

	void Out(void)
	{
		cout << "����� � ������������: (" << x << "," << y << ")\n";
	};
	float S() {
		return 0;
	};
};
class Circle_: public Figure
{
   int R;	// ���� ������.
	 public:
		 Circle_()
		 {
			 x=y=R = 0;
		 };

		 Circle_(int x2, int y2, int R2)
		 {
			 x = x2;
			 y = y2;
			 R = R2;
		 };
		 void Out(void)
		 {
			 cout << "���������� � �������� = " << R << "\n";
			 cout << "���������� ������ ����������: (" << x << "," << y << ")\n";
		 };
	 float S()
	 {
		 return (3, 1415926535 * pow(R, 2));
	 };
};
class Rectangle_: public Figure
{  
	 int a,b;	// ���� �������.
	 public:
	 Rectangle_() {
		 a = b = 0;
	 };
	 Rectangle_(int a2, int b2) {
		 a = a2;
		 b = b2;
	 };	 
	 float S()
	 {
		 return a * b;
	 };
	 void Out(void)
	 {
		 cout << "������������� � ������� ������: � = " << a << ", b = " << b << "\n";
	 };
};

  /*�����: �������� ������� (�� ������ ����������) ����������
    �� ����� ���������� ����� ������, ���������������� ���������
    ���� ������������ �������. ��������: ������������� ������, �
    �������� ����������� ������. */


