#include <iostream>
#include "list.h"
using namespace std;
int main()
{
	list x;
	cout << "x is empty:" << x.isempty() << endl;
	Item num[4] = { 1,2,3,4 };
	x.add(num[0]);
	x.add(num[1]);
	x.add(num[2]);
	x.add(num[3]);
	cout << "x is full:" << x.isfull() << endl;
	x.add(num[0]);
	cout << "x is full:" << x.isfull() << endl;
	x.update(0, num[3]);
	x.print(0);
}
void list::add(Item & x)
{
	if(tot<MAXLEN) a[tot++] = x;
	else cerr << "list is already full\n";
}
bool list::isempty()
{
	if (tot)return false;
	return true;
}
bool list::isfull()
{
	if (tot == MAXLEN)return true;
	else return false;
}
void list::update(int id,Item & x)
{
	a[id] = x;
}
void list::print(int id)//arrayÔÚc++ 11 ÊÇ¹Ø¼ü×Ö
{
	cout << "number " << id << " is "
	<< a[id] << endl;
}