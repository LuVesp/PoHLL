#pragma once
using namespace System;
// Класс не имеет методов ввода и вывода. 
// Визуализация - на элементах управления формы:
// 1. Описаны свойства property.
// 2. Перегружен метод ToString.
// 3. Есть метод Set, он закомментирован.

public ref class My_Point {
	int x, y;		// Координаты точки.
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


