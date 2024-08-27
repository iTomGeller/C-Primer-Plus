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
	//���캯��������Ƕ��
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
	//ֻ��strcpy��?
	strcpy(performers, s1);
	strcpy(label, s2);
}
Cd::~Cd()//�����˾�Ҫ����
{
	
}
void Cd::Report()const {
	cout << "performers: " << performers <<
		" ,label: " << label << "\n, " <<
		"selections: " << selections << ",playtime: " << playtime 
		<< endl;
}
void Classic::Report()const {
	//�����ǲ���ֱ�ӵ���label��Щprivate��Ա��
    //��ͨ������ĺ���
	cout << "work: " << work << " ,";
	Cd::Report();
}
//operator Ҫvirtual��?--->����
Cd & Cd::operator=(const Cd & b)
{
	//����뷵������ �����Ǵ�ֵ��ȥ
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