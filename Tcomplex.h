#pragma once
namespace Program
{
	class Tcomplex
	{
		double Re; double Im;
	public:
		operator double()
		{
			return Re;
		}
		void Input(void);
		void Output(void);
		Tcomplex operator + (const Tcomplex &op2);
		Tcomplex operator - (const Tcomplex &op2);
		Tcomplex operator * (const Tcomplex &op2);
		Tcomplex operator / (const Tcomplex &op2);
		int operator ==(const Tcomplex &op2);
		int operator <(const Tcomplex &op2);
		int operator >(const Tcomplex &op2);
		int operator !=(const Tcomplex &op2);
		Tcomplex();
		~Tcomplex();
	};
}

