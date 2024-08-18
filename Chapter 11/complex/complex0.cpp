#include "complex0.h"
//��ʵ����ĳ�Ա������Ҫ��complex::�� ��Ҫ
complex::complex(double a, double b)
{
	real = a; imaginary = b;
}
complex complex::operator+(complex & b)
{
	complex t = complex(real + b.real, imaginary + b.imaginary);
	return t;
}
complex complex::operator-(complex & b)
{
	complex t = complex(real - b.real, imaginary - b.imaginary);
	return t;
}
complex complex::operator*(complex & b)
{
	auto A = real, B = imaginary, C = b.real, D = b.imaginary;
	complex t = complex(A * C - B * D, A * D + B * C);
	return t;
}
complex complex::operator~()
{
	complex t = complex(real, -imaginary);
	return t;
}
complex operator*(double a, complex & b)
{
	complex t = complex(a * b.real, a * b.imaginary);
	return t;
}
ostream & operator<<(ostream & os,const complex & b)
{
	os << "(" << b.real << "," << b.imaginary << "i)";
	return os;
}
//ostream ����� istream������
istream & operator>>(istream & is, complex & b)
{
	is >> b.real >> b.imaginary;
	//����޷��ɹ����� ���ش����ź� ��������q�˳�
	return is;
}
complex::complex()
{
	
}