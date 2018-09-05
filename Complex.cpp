#include <iostream>
#include <conio.h>
#include "Tcomplex.h"
using namespace std;
using Program::Tcomplex;
int main()
{
	Tcomplex A, B, C;
	B.Input();
	C.Input();
	B.Output(); cout<<endl;
	C.Output();	cout<<endl;
	A = C + B;
	cout << endl << "Summa = ";
	A.Output();
	A = C - B;
	cout << endl << "Different = ";
	A.Output();
	A = C * B;
	cout << endl << "Multiplication = ";
	A.Output();
	cout << endl;
	_getch();
	if (B != 0)
	{
		A = C / B;
			cout << endl << "Division = ";
			A.Output();
			cout << endl;
		}
	if (C < B)
		cout << "B more, then C";
	if (C > B)
		cout << "C more, then B";
	if (C == B)
		cout << "B = C";
	_getch();
	return 0;
}