#include <iostream>
#include "cpmv.h"
#include <string>
using namespace std;
Cpmv::Cpmv()
{
	pi = new Info;
	//空string应该为""
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
	//这是深拷贝 没有直接复制指针
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
}
Cpmv::Cpmv(Cpmv && mv)
{
	//这里直接对指针进行操作
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
	//右值取得到地址吗
	//右值引用可取到
	if (this == &mv)return *this;
	pi = mv.pi;
	mv.pi = nullptr;
	return *this;
}
Cpmv Cpmv::operator+(const Cpmv & obj) const
{
	//为什么不是引用类型?
	//因为如果是引用使用c = a + b 会改变a
	//为什么不是const
	//因为要实现连加
	return Cpmv(pi->qcode + obj.pi->qcode, pi->zcode + obj.pi->zcode);
}
void Cpmv::Display() const
{
	//为什么输出pi->qcode会报错?
	//因为string必须得加string头文件 才能直接输出
	cout << "The qcode is: "  << pi->qcode << ", "
		 << "The zcode is: " << pi->zcode << endl;
}