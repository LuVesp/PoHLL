#pragma once
#include <iostream>
using namespace std;

class Vector {
private:
	float x1, y1; //координаты начала вектора                       //исправила тип координат
	float x2, y2; //координаты конца вектора
public:
	Vector()  //базовый конструктор
	{
		x1 = x2 = y1 = y2 = 0;
	};

	Vector(float a, float b, float c, float d) //конструктор произвольного вектора
	{
		x1 = a;
		y1 = b;
		x2 = c;
		y2 = d;
	};

	Vector operator =(Vector X)  //присваивает координаты одного вектора другому
	{
		x1 = X.x1;
		x2 = X.x2;
		y1 = X.y1;
		y2 = X.y2;
		return *this;
	}

	Vector change(Vector A)  //метод возвращает вектор, получившийся путём перемешения начала текущего вектора в начало указанного вектора (необходим для сдвига в пучке)
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
		return (pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5));  //вычисляет длину вектора
	}
	
	friend istream& operator >> (istream& in, Vector& A);
	friend ostream& operator << (ostream& out, Vector& A);
	friend Vector operator +(const Vector& A, const Vector& B);

	friend bool operator ==(const Vector& A, const Vector& B); // - я убрала, но это оставила, когда переделывала удаление вектора из пучка сравнивание пригодилось
};


istream& operator >> (istream& in, Vector& A) {
	cout << "Введите координаты начала вектора: ";
	in >> A.x1 >> A.y1;
	cout << "Введите координаты конца вектора: ";
	in >> A.x2 >> A.y2;
	cout << "\n";
	return in;
}
ostream& operator << (ostream& out, Vector& A) {
	out << "\nКоординаты начала вектора " << ": (" << A.x1 << "," << A.y1 << ")\n";
	out << "Координаты конца вектора " << ": (" << A.x2 << "," << A.y2 << ")\n";
	cout << "\n";
	return out;
}
bool operator ==(const Vector& A, const Vector& B)
{
	return (A.x1 == B.x1 && A.y1 == B.y1 && A.x2 == B.x2 && A.y2 == B.y2);
}

Vector operator +(const Vector& A, const Vector& B) //получает координаты начала и конца вектора, получившиеся в ходе сложения двух исходных векторов
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
	 
	bool Add(Vector B) //добавляет указанный вектор в конец массива пучка     //Метод исправила. Тепери возвращает логическое значение. Вычисление длины в теле программы вообще лишним было
	{
		int j=true;
		if (len == 10)
			j = false;
			else
			{
				if (len == 0) //если в пучке нет векторов, то первый добавленный вектор становится первым вектором пучка
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

	void Delete(Vector B) //удаляет один из векторов с указанной позиции  //надеюсь правильно поняла суть удаления "по значению"
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
		cout << "Пучёк векторов: " << endl;
		for (int i = 0; i < len; i++)
		{
			cout << A[i];  //задумалась о своей невнимательности снова
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

