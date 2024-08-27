#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include "classic.h"
using namespace std;
Cd::Cd(const char * s1,const char * s2, int n, double x)
{
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd & d)
{
	//构造函数不可以嵌套
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd()
{
	char s1[] = "none", s2[] = "none";
	selections = 0;
	playtime = 0;
	//只能strcpy吗?
	strcpy(performers, s1);
	strcpy(label, s2);
}
Cd::~Cd()//声明了就要定义
{
	
}
void Cd::Report()const {
	cout << "performers: " << performers <<
		" ,label: " << label << "\n, " <<
		"selections: " << selections << ",playtime: " << playtime 
		<< endl;
}
void Classic::Report()const {
	//子类是不能直接调用label这些private成员的
    //得通过基类的函数
	cout << "work: " << work << " ,";
	Cd::Report();
}
//operator 要virtual吗?--->不用
Cd & Cd::operator=(const Cd & b)
{
	//这必须返回自身 否则是传值回去
	if (this == &b)return *this;
	strcpy(performers, b.performers);
	strcpy(label, b.label);
	selections = b.selections;
	playtime = b.playtime;
	return *this;
}
Classic::Classic() : Cd()
{
	char s[] = "none";
	strcpy(work, s);
}
Classic::Classic(const char * s, const  char * s1, const char * s2, int n, double x)
	: Cd(s1, s2, n, x)
{
	strcpy(work, s);
}
Classic & Classic::operator=(const Classic & b)
{
	if (this == &b)return *this;
	Cd::operator=(b);
	strcpy(work, b.work);
	return *this;
}