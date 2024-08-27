#pragma warning(disable : 4996)
#include "port.h"
#include <string>
using namespace std;
Port::Port(const char * br, const char * st, int b)
{
	int len = strlen(br);
	brand = new char[len + 1];
	strcpy(brand, br);
	strcpy(style, st);
	bottles = b;
}
Port::Port(const Port & p)
{
	int len = strlen(p.brand);
	brand = new char[len + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
}
Port & Port::operator+=(int b)
{
	bottles += b;
	return *this;
}
Port & Port::operator-=(int b)
{
	bottles -= b;
	return *this;
}
Port & Port::operator=(const Port & p)
{
	if (this == &p)return *this;
	delete[]brand;
	int len = strlen(p.brand);
	brand = new char[len + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
	return *this;
}
void Port::Show()const 
{
	cout << "Brand: " << brand << endl
		<< "Kind: " << style << endl
		<< "Bottles: " << bottles << endl;
}
ostream & operator<<(ostream & os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
		return os;
}
VintagePort::VintagePort() : Port()
{
	char s[] = "none";
	int len = strlen(s);
	nickname = new char[len + 1];
	strcpy(nickname, s);
	year = 2024;
}
VintagePort::VintagePort(const char * br, int b, const char * nn, int y) :Port(br, "Vintage", b)
{
	//Port(br, "Vintage", b); 这么写会当成构造一个Port实例
	//要调用必须用initializer list
	//new(this)
	year = y;
	int len = strlen(nn);
	nickname = new char[len + 1];
	strcpy(nickname, nn);
}
VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{
	//Port(vp);
	year = vp.year;
	int len = strlen(vp.nickname);
	nickname = new char[len + 1];
	strcpy(nickname, vp.nickname);
}
VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	//注意子类的assignment operator 中对于delete的操作
	if (this == &vp)return *this;
	delete[]nickname;
	Port::operator=(vp);
	int len = strlen(vp.nickname);
	nickname = new char[len + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}
ostream & operator<<(ostream & os, const VintagePort & vp)
{
	os << "Nickname: " << vp.nickname << endl
		<< "Year: " << vp.year << endl;
	os << (const Port &)vp; //对于friend的函数需要进行类型转换
	return os;
}
void VintagePort::Show()const
{
	cout << "Nickname: " << nickname << endl
		<< "Year: " << year << endl;
	Port::Show();
}