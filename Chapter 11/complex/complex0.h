#pragma once
#include <iostream>
using namespace std;
class complex
{
private:
	double real, imaginary;
public:
	complex();//默认构造函数即使不定义也要声明
	complex(double a, double b);
	complex operator+(complex & b);
	complex operator-(complex & b);
	complex operator*(complex & b);
	complex operator~();
	friend complex operator*(double a, complex & b);
	friend ostream & operator<<(ostream & os,const complex & b);
	friend istream & operator>>(istream & is, complex & b);
	//对于输出 必须定义const complex & b 否则无法支持 a + b这样表达式输出
	//对于输入 则必须不能加 const
};