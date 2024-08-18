#include "complex0.h"
//在实现类的成员函数需要用complex::吗？ 需要
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
//ostream 是输出 istream是输入
istream & operator>>(istream & is, complex & b)
{
	is >> b.real >> b.imaginary;
	//如果无法成功读入 返回错误信号 所以输入q退出
	return is;
}
complex::complex()
{
	
}