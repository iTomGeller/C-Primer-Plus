#pragma warning(disable:4996)
#include <iostream>
#include "Cow.h"
#include <string>
using namespace std;
Cow::Cow()
{
	//name = "C++"; 初始化可以char name[20] = "C++"? 可以
	//但是对于char name[20]的定义 只能用memcpy 
	// //不能将字符串直接赋值给该字符指针p，原因是：
    //指针p指向的是字符串的第一个字符，只能用下面的
    //strcpy
	char s[4] = "C++";
	memcpy(name, s, sizeof s);
	hobby = new char[10];
	memcpy(hobby, s, sizeof s);
	weight = 0;
}
Cow::Cow(const char * nm, const char * ho, double wt)
{
	int len = strlen(ho) + 1;
	hobby = new char[len];
	//sizeof(ho)是得到指针的大小 得不到字符串
	strcpy(name, nm);
	strcpy(hobby, ho);
	weight = wt;
}
Cow::Cow(const Cow & c)
{ 
	//构造函数不能返回值
	int len = strlen(c.hobby) + 1;
	hobby = new char[len];
	strcpy(name, c.name);
	strcpy(hobby, c.hobby);
	weight = c.weight;
}
Cow::~Cow()
{
	delete[] hobby;
	//把new申请的删掉
}
Cow & Cow::operator=(const Cow & c)
{
//	hobby = new char[sizeof(c.hobby)];
	//是这么写？
	//要把原来的给delete 因为大小不合适 要重新赋值
	//但是如果给自己赋值删了会出bug 所以要特判
	if (this == &c)return *this;
	//如果要用*this == c还要自定义等于=运算符
	strncpy(name, c.name, 20);
	delete[] hobby;
	int len = strlen(c.hobby) + 1;
	hobby = new char[len];
	strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;
}
void Cow::ShowCow()const
{
	cout << "The name is " << name <<
		",the hobby is " << hobby <<
		",the weight is " << weight << endl;
}