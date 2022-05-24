//---------------------------------------------------------------------------
/* Виртуальные методы.
1. В базовом и производном классах объявлены методы с одним и тем же 
именем, типом и параметрами.
2. Указатель на объект базового класса (A *a) может указывать на объект 
производного класса, при этом выполняется преобразование указателей 
в соответствии с правилами преобразования типов. */
#include <iostream>
using namespace std;
class Figure {
protected:
	int x, y;	// Привязка.
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
		cout << "Точка с координатами: (" << x << "," << y << ")\n";
	};
	float S() {
		return 0;
	};
};
class Circle_: public Figure
{
   int R;	// Типа радиус.
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
			 cout << "Окружность с радиусом = " << R << "\n";
			 cout << "Координаты центра окружности: (" << x << "," << y << ")\n";
		 };
	 float S()
	 {
		 return (3, 1415926535 * pow(R, 2));
	 };
};
class Rectangle_: public Figure
{  
	 int a,b;	// Типа стороны.
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
		 cout << "Прямоугольник с длинами сторон: а = " << a << ", b = " << b << "\n";
	 };
};

  /*Вывод: механизм раннего (на стадии компиляции) связывания
    не может обеспечить вызов метода, соответствующего реальному
    типу указываемого объекта. Проблема: распознавание класса, к
    которому принадлежит объект. */


