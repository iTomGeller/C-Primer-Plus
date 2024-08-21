#include "Cow.h"
int main()
{
	Cow a;
	char tmp[] = "hello";
	Cow b(tmp, tmp, 123);
	Cow c = a;//copy constructor
	Cow d;
	b.ShowCow();
	//b = b = a;
//	b.ShowCow();
	c = b;
	c.ShowCow();
}