#include "Point_Go.h"
#include "MyForm.h"
// Всегда, когда объект должен получить форму.
Point_Go::Point_Go()
{
	x = y = 50;
	direction = 1;
	speed = 3;
}
Point_Go::Point_Go(int xx, int yy)
{
	x = xx;
	y = yy;
	direction = 1;
	speed = 3;
}
String^ Point_Go::ToString()
{
	return String::Format("({0},{1})", x, y);
}
//----------------------------------------------------------------------
void Point_Go::Draw(System::Windows::Forms::PictureBox^ Pb)
{
	Pb->Left = x;
	Pb->Top = y;
}
void  Point_Go::Go(System::Windows::Forms::PictureBox^ Pb)
{
	switch (direction)
	{
	case 1: {Up(Pb); break; }
	case 2: {Down(Pb); break; }
	case 3: {Left(Pb); break; }
	case 4: {Right(Pb); break; }
	default: break;
	}
}
//----------------------------------------------------------------------
void Point_Go::Left(System::Windows::Forms::PictureBox^ Pb)
{
	x -= speed;
	if (x < 8) x = 8;
	Draw(Pb);
}
void Point_Go::Right(System::Windows::Forms::PictureBox^ Pb)
{
	System::Windows::Forms::Form^ Prm;
	Prm = gcnew Practice7::MyForm;
	x += speed;
	if (x > Prm->ClientSize.Width - 194)
		x = Prm->ClientSize.Width - 194;
	Draw(Pb);
}
void Point_Go::Down(System::Windows::Forms::PictureBox^ Pb)
{
	System::Windows::Forms::Form^ Prm;
	Prm = gcnew Practice7::MyForm;
	y += speed;
	if (y > Prm->ClientSize.Height - 40)
		y = Prm->ClientSize.Height - 40;
	Draw(Pb);
}
void Point_Go::Up(System::Windows::Forms::PictureBox^ Pb)
{
	y -= speed;
	if (y < 35) y = 35;
	Draw(Pb);
}


