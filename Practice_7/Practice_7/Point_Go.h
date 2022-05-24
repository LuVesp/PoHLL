#pragma once
using namespace System;
ref class Point_Go
{
	int x, y;
	int speed;
	int direction;
	// Для доступа к форме.
	System::Windows::Forms::Form^ Prm;
public:
	Point_Go();
	Point_Go(int, int);
	virtual String^ ToString()  override;
	property int X
	{
		int get()
		{
			return x;
		}
		void set(int X)
		{
			x = X;
		}
	}
	property int Y
	{
		int get()
		{
			return y;
		}
		void set(int Y)
		{
			y = Y;
		}
	}
	property int Speed
	{
		int get()
		{
			return speed;
		}
		void set(int S)
		{
			speed = S;
		}
	}
	property int Dir
	{
		int get()
		{
			return direction;
		}
		void set(int D)
		{
			direction = D;
		}
	}

	//------------------------------------------------------------
public:
	//-------------------------------------------------------------
	void Draw(System::Windows::Forms::PictureBox^ Pbx);
	void Go(System::Windows::Forms::PictureBox^ Pb);
	//-------------------------------------------------------------
	void Left(System::Windows::Forms::PictureBox^ Pb);
	void Right(System::Windows::Forms::PictureBox^ Pb);
	void Up(System::Windows::Forms::PictureBox^ Pb);
	void Down(System::Windows::Forms::PictureBox^ Pb);

};

