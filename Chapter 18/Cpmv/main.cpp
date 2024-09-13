#include <iostream>
#include "cpmv.h"
int main()
{
	Cpmv a;
	Cpmv b("whu","hello");
	Cpmv c(a + b + b);
	Cpmv d(a + b);//常量与变量运算=右值
	a.Display();
	puts("b is as follow:");
	b.Display();
	puts("c is as follow:");
	c.Display();
	puts("d is as follow:");
	d.Display();
}