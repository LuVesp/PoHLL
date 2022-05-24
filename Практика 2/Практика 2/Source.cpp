#include <iostream>
#include <locale>
#include "Class_Point.h"

using namespace std;

void main(void)
{
	setlocale(LC_ALL, ".1251");
	
	My_point A ( 2, 3 );
	My_point B ( 4, 5 );
	My_point D ( 3.2345, 4.23 );
	My_point E ( 3.2344, 4.23 );
	My_point C = A + B;
	double R = A - B;

	C.Out();
	cout << R << "\n";
	cout << "\n";

	A++;
	A.Out();
	B++;
	B.Out();
	D++;
	D.Out();
	cout << "\n";

	A--;
	A.Out();
	B--;
	B.Out();
	D--;
	D.Out();
	cout << "\n";

	if (A == B)
		cout << "Yes \n";
	else
		cout << "No \n";
	if (D == E)
		cout << "Yes \n";
	else
		cout << "No \n";
	cout << "\n";

	if (A > B)
		cout << "Yes \n";
	else
		cout << "No \n";

	if (B > A)
		cout << "Yes \n";
	else
		cout << "No \n";
	cout << "\n";

	A.Out();
	B.Out();
	A = B;
	A.Out();
	cout << "\n";


	My_point* A2;
	A2 = new My_point (2, 3);

	My_point* B2;
	B2 = new My_point (4,5);

	My_point * C2 = new My_point;
	*C2 = *A2 + *B2;	//  A2 и B2 Ц динамические объекты.
	C2->Out();

	double* R2 = new double;
	 *R2 = *A2 - *B2;
	cout << R << "\n";
	cout << "\n";

	(*A2)++;
	A2->Out();
	(*B2)++;
	B2->Out();
	cout << "\n";

	(*A2)--;
	A2->Out();
	(*B2)--;
	B2->Out();
	cout << "\n";

	if (*A2 == *B2)
		cout << "Yes \n";
	else
		cout << "No \n";
	cout << "\n";

	if (*A2 > *B2)
		cout << "Yes \n";
	else
		cout << "No \n";

	if (*B2 > *A2)
		cout << "Yes \n";
	else
		cout << "No \n";
	cout << "\n";

	system("pause");
}