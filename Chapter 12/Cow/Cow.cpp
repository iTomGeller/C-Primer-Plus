#pragma warning(disable:4996)
#include <iostream>
#include "Cow.h"
#include <string>
using namespace std;
Cow::Cow()
{
	//name = "C++"; ��ʼ������char name[20] = "C++"? ����
	//���Ƕ���char name[20]�Ķ��� ֻ����memcpy 
	// //���ܽ��ַ���ֱ�Ӹ�ֵ�����ַ�ָ��p��ԭ���ǣ�
    //ָ��pָ������ַ����ĵ�һ���ַ���ֻ���������
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
	//sizeof(ho)�ǵõ�ָ��Ĵ�С �ò����ַ���
	strcpy(name, nm);
	strcpy(hobby, ho);
	weight = wt;
}
Cow::Cow(const Cow & c)
{ 
	//���캯�����ܷ���ֵ
	int len = strlen(c.hobby) + 1;
	hobby = new char[len];
	strcpy(name, c.name);
	strcpy(hobby, c.hobby);
	weight = c.weight;
}
Cow::~Cow()
{
	delete[] hobby;
	//��new�����ɾ��
}
Cow & Cow::operator=(const Cow & c)
{
//	hobby = new char[sizeof(c.hobby)];
	//����ôд��
	//Ҫ��ԭ���ĸ�delete ��Ϊ��С������ Ҫ���¸�ֵ
	//����������Լ���ֵɾ�˻��bug ����Ҫ����
	if (this == &c)return *this;
	//���Ҫ��*this == c��Ҫ�Զ������=�����
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