/*�������� ������� 5
����: ������������� ������������, ����������� ������� � ����������� ������.
������� 22.
1. ������� ����������� ������� ����� ��������, ��� �������� ���������� ����������� ����� ����������� ��� ������� � ������ ���������.
2. ������� ����������� ������ ��������, ������������, �������, ��������. �������������� ����������� ����� ����������� ��� ������� �������.
3. ��������� �������� ��� ������� ���� ������������ �������.
*/

#include <iostream>;               // � �� ��������, ��� ���������� ��� ����. 
#include <locale>                  // ������ ������������.
#include "Header.h";				//���� � ��� - �� ��� � �� ������, ����� ������� ���������, ��� ��������� � ���� ������������ ?
using namespace std;				//��, � ���� ����� � ��� ����������� ��� ������, ��� ������������ � ���� �� �����������.

void main(void)
{
	setlocale(LC_ALL, ".1251");

	Human* Human1 = new Russian("����");
	Human* Human2 = new English("Alex");
	Human* Human3 = new German("Agnet");
	Human* Human4 = new Chinese("Tao");

	Human1->Hello();
	Human2->Hello();
	Human3->Hello();
	Human4->Hello();

	system("pause");
}
