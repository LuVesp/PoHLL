#include <iostream>
#include "Classes_Inheritance.h"
#include <locale>
using namespace std;

void main(void)
{
	setlocale(LC_ALL, ".1251");
	MyCircle A;
	cin >> A;
	cout << A;

	Sector B ( 9,90 );
	cout << B;

	cout << B.S() << "\n";

	Sector S1;
	cin >> S1;
	cout << S1;
	Sector S2(90);
	cout << S2;
	Sector S3(1.5, 45);
	cout << S3;
	Sector S4(A, 60);
	cout << S4;
	cout << "\n";

	Sector C ( 9,90 );
	if (B == C)
		cout << "Yes \n";
	else
		cout << "No \n";
	cout << "\n";
	if (S3 == S4)
		cout << "Yes \n";
	else
		cout << "No \n";
	cout << "\n";

	if (B > C)
		cout << "Yes \n";
	else
		cout << "No \n";
	cout << "\n";
	if (S4 > S3)
		cout << "Yes \n";
	else
		cout << "No \n";
	cout << "\n";

	system("pause");
}