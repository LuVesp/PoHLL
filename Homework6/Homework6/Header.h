#pragma once
#include <cmath>
using namespace System;

public ref class Rhomb {
	float a, b;		// длина стороны
public:
	Rhomb()  //конструктор по умолчанию
	{
		a = b = 0;
	};
	Rhomb(float X) //конструктор квадрата
	{
		a = b = X;
	};
	Rhomb(float A, float B) //конструктор произвольного ромба
	{
		a = A;
		b = B;
	};
	//	void Set(float);
	property float A {
		float get() {
			return a;
		}
		void set(float A) {
			a = A;
		}
	}

	property float B {
		float get() {
			return b;
		}
		void set(float B) {
			b = B;
		}
	}

	float Square()
	{
		return (a * b) / 2;
	}

	float Side()
	{
		return (pow(pow(a, 2) + pow(b, 2), 0.5)) / 2;
			
	}

} ;