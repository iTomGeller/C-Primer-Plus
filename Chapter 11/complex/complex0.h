#pragma once
#include <iostream>
using namespace std;
class complex
{
private:
	double real, imaginary;
public:
	complex();//Ĭ�Ϲ��캯����ʹ������ҲҪ����
	complex(double a, double b);
	complex operator+(complex & b);
	complex operator-(complex & b);
	complex operator*(complex & b);
	complex operator~();
	friend complex operator*(double a, complex & b);
	friend ostream & operator<<(ostream & os,const complex & b);
	friend istream & operator>>(istream & is, complex & b);
	//������� ���붨��const complex & b �����޷�֧�� a + b�������ʽ���
	//�������� ����벻�ܼ� const
};