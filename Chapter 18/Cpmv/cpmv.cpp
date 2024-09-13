#include <iostream>
#include "cpmv.h"
#include <string>
using namespace std;
Cpmv::Cpmv()
{
	pi = new Info;
	//��stringӦ��Ϊ""
	pi->qcode = "";
	pi->zcode = "";
}
Cpmv::Cpmv(std::string q, std::string z)
{
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
}
Cpmv::Cpmv(const Cpmv & cp)
{
	//������� û��ֱ�Ӹ���ָ��
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
}
Cpmv::Cpmv(Cpmv && mv)
{
	//����ֱ�Ӷ�ָ����в���
	pi = mv.pi;
	mv.pi = nullptr;
}
Cpmv::~Cpmv()
{
	delete pi;
} 
Cpmv & Cpmv::operator=(const Cpmv & cp)
{
	if (this == &cp)return *this;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	return *this;
}
Cpmv & Cpmv::operator=(Cpmv && mv)
{
	//��ֵȡ�õ���ַ��
	//��ֵ���ÿ�ȡ��
	if (this == &mv)return *this;
	pi = mv.pi;
	mv.pi = nullptr;
	return *this;
}
Cpmv Cpmv::operator+(const Cpmv & obj) const
{
	//Ϊʲô������������?
	//��Ϊ���������ʹ��c = a + b ��ı�a
	//Ϊʲô����const
	//��ΪҪʵ������
	return Cpmv(pi->qcode + obj.pi->qcode, pi->zcode + obj.pi->zcode);
}
void Cpmv::Display() const
{
	//Ϊʲô���pi->qcode�ᱨ��?
	//��Ϊstring����ü�stringͷ�ļ� ����ֱ�����
	cout << "The qcode is: "  << pi->qcode << ", "
		 << "The zcode is: " << pi->zcode << endl;
}