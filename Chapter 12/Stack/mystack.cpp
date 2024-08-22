#include "Stack.h"
#include <iostream>
using namespace std;
int main()
{
	Stack a(3);
	//Stack b(4);
	Item ar[4] = { 1,2,3,4 };
	cout << "a is empty: " << a.isempty() << endl;
	a.push(ar[0]);
	a.push(ar[1]);
cout << "a push: " << a.push(ar[1]) << endl;
	//不是成员函数得不到private 变量
	cout << "a is empty: " << a.isempty() << endl;
	Stack b = a;
	cout << "b is empty: " << b.isempty() << endl;
	Item tmp;
	b.pop(tmp);
	cout << "b is empty: " << b.isempty() << endl;
	cout << tmp << endl;
	b.pop(tmp);
	cout << "b is empty: " << b.isempty() << endl;
	cout << tmp << endl;
}