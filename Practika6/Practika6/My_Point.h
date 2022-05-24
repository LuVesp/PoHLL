#pragma once
using namespace System;
// ����� �� ����� ������� ����� � ������. 
// ������������ - �� ��������� ���������� �����:
// 1. ������� �������� property.
// 2. ���������� ����� ToString.
// 3. ���� ����� Set, �� ���������������.

public ref class My_Point {
	int x, y;		// ���������� �����.
public:
	My_Point(void);
	My_Point(int, int);
	//	void Set(int,int);
	property int X {
		int get() {
			return x;
		}
		void set(int X) {
			x = X;
		}
	}
	property int Y {
		int get() {
			return y;
		}
		void set(int Y) {
			y = Y;
		}
	}
	virtual String ^ ToString() override;

	void Draw(System::Windows::Forms::PictureBox^ Pbx)
	{
		Pbx->Top = X;
		Pbx->Left = Y;
	};
};


