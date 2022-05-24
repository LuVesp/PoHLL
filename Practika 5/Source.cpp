#include <iostream>;
#include <locale>
#include "Classes_PolyMorphism.h";
using namespace std;

void main(void)
{
	setlocale(LC_ALL, ".1251");


	Figure *A;
	A = new Point_(3,4);
	A->Out();
	cout << "S(Точка) = " << A->S();
	cout << "\n\n";

	A = new Circle_(3, 4,3);
	A->Out();
	cout << "S(Окружность) = " << A->S();
	cout << "\n\n";

	A = new Rectangle_(3, 4);
	A->Out();
	cout << "S(Прямоугольник) = " << A->S();
	cout << "\n\n";

	Figure* B[4];
	B[0] = new Point_(3, 4);
	B[1] = new Circle_(3, 4, 5);
	B[2] = new Rectangle_(3, 4);
	B[3] = new Rectangle_(3, 2);

	for (int i = 0; i < 4; i++)
		B[i]->Out();

	if (B[0] > B[1])
		cout << "B[0] > B[1]";
	else
		cout << "B[0] <= B[1]";
	cout << "\n\n";

	if (B[1] > B[2])
		cout << "B[1] > B[2]";
	else
		cout << "B[1] <= B[2]";
	cout << "\n\n";

	if (B[2] > B[1])
		cout << "B[2] > B[1]";
	else
		cout << "B[2] <= B[1]";
	cout << "\n\n";

	int max = 0;

	for (int i = 1; i < 4; i++)
		if (B[i] > B[max])
			max = i;
	cout << "Наибольший элемент массива: \n";
	B[max]->Out();

	system("pause");
}