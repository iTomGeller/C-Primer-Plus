#include "Betelgeusean.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	plorg a;
	a.report();
	a.change(66);
	a.report();
}
void plorg::change(int new_ci)
{
	ci = new_ci;
}
plorg::plorg()
{
	char str[] = "Plorga";
	//≤ªƒ‹”√ name = str 
	memcpy(name, str, sizeof str);
	ci = 50;
}
void plorg::report()const
{
	cout << "name is " << name <<
		",ci is " << ci << endl;
}