#include <iostream>
#include <cstring>
#include <cstdio>
#include "Person.h"
using namespace std;
int main()
{
	Person one;                       // use default constructor
	Person two("Smythecraft");        // use #2 with one default argument
	Person three("Dimwiddy", "Sam");  // use #2, no defaults
	one.Show();
	cout << endl;
	one.FormalShow();
	two.Show();
	cout << endl;
	two.FormalShow();
	three.Show();
	cout << endl;
	three.FormalShow();
}
void Person::Show()const//在实现也要加const
{
	//printf("%s\n", fname);
	cout << fname << " " << lname << endl;
}
void Person::FormalShow()const
{
	cout << lname << " " << fname << endl;
}
Person::Person(const string & ln, const char * fn )
{
	//fname = fn;
	memcpy(fname, fn, sizeof fname);//这里的sizeof 不能取指针的size
	//得取fname的
	lname = ln;
}