#include "Tcomplex.h"
#include <iostream>
using namespace std;
namespace Program
{
	Tcomplex::Tcomplex()
	{
	}
	Tcomplex::~Tcomplex()
	{
	}
	void Tcomplex::Input(void)
	{
		cout << "Input Re"<<endl;
		cin >> Re;
		cout << "Input Im" << endl;
		cin >> Im;
	}
	void Tcomplex::Output(void)
	{
		if (Re != 0)
			cout << Re;
		if ((Im > 0) && (Re != 0))
			cout << "+";
		if ((Im != 0) && (abs(Im) != 1))
			cout << Im << "i";
		if ((Re == 0) && (Im == 0))
			cout << "0";
		else
			if ((Im > 0) && (abs(Im) == 1)) cout << "i";
			else
				if ((Im < 0) && (abs(Im) == 1)) cout << "-i";
	}
	Tcomplex Tcomplex::operator + (const Tcomplex &op2)
	{
		Tcomplex res;
		res.Re = Re + op2.Re;
		res.Im = Im + op2.Im;
		return res;
	}
	Tcomplex Tcomplex::operator - (const Tcomplex &op2)
	{
		Tcomplex res;
		res.Re = Re - op2.Re;
		res.Im = Im - op2.Im;
		return res;
	}
	Tcomplex Tcomplex::operator * (const Tcomplex &op2)
	{
		Tcomplex res;
		res.Re = Re*op2.Re - Im*op2.Im;
		res.Im = Re*op2.Im + Im*op2.Re;
		return res;
	}
	Tcomplex Tcomplex::operator / (const Tcomplex &op2)
	{
		Tcomplex res;
		res.Re = (Re*op2.Re + Im*op2.Im)/(op2.Re*op2.Re+op2.Im*op2.Im);
		res.Im = (Im*op2.Re-Re*op2.Im)/(op2.Im*op2.Im+op2.Re*op2.Re);
		return res;
	}
	int Tcomplex::operator ==(const Tcomplex &op2)
	{
		return ((Re == op2.Re) && (Im == op2.Im));
		//	return true;
		///*if ((Re*Re + Im*Im) == (op2.Im*op2.Im + op2.Re*op2.Re))
		//	return true;*/
		//return false;
	}
	int Tcomplex::operator <(const Tcomplex &op2)
	{
		return ((Re*Re + Im*Im) < (op2.Im*op2.Im + op2.Re*op2.Re));
			/*return true;
		return false;*/
	}
	int Tcomplex::operator >(const Tcomplex &op2)
	{
		return ((Re*Re + Im*Im) > (op2.Im*op2.Im + op2.Re*op2.Re));
			/*return true;
		return false;*/
	}
	int Tcomplex::operator !=(const Tcomplex &op2)
	{
		return ((Re != op2.Re) || (Im != op2.Im));
	/*		return true;
		return false;*/
	}
}