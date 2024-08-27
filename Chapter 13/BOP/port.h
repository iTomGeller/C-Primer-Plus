#pragma once
#include <iostream>
using namespace std;
class Port
{
private:
	char * brand;
	char style[20]; // i.e., tawny, ruby, vintage
	int bottles;
public:
	Port(const char * br = "none", const char * st = "none", int b = 0);
	Port(const Port & p);                // copy constructor
	virtual ~Port() { delete[] brand; }
	//析构函数必须加virtual 考虑指针数组的情况
	//对 数量 子类可以继承，所以不需要重定义
	Port & operator=(const Port & p);
	Port & operator+=(int b);            // adds b to bottles
	Port & operator-=(int b);            // subtracts b from bottles, if available
		int BottleCount() const { return bottles; }
	virtual void Show() const;
	friend ostream & operator<<(ostream & os, const Port & p);
};
class VintagePort : public Port // style necessarily = "vintage"
{
private:
	char * nickname;           // i.e., "The Noble" or "Old Velvet", etc.
	int year;                  // vintage year
public:
	VintagePort();
	VintagePort(const char * br, int b, const char * nn, int y);
	VintagePort(const VintagePort & vp);
    virtual	~VintagePort() { delete[] nickname; }//1.为什么不是virtual?--->基类是virtual了
	VintagePort & operator=(const VintagePort & vp);
	virtual void Show() const;
	friend ostream & operator<<(ostream & os, const VintagePort & vp);//2.friend函数需要重构吗?--->友元函数不是成员函数，不可继承
};