#include "Stack.h"
#include <iostream>
#include <string>
using namespace std;
Stack::Stack(int n) : size(0), top(0)
{
	pitems = new Item[MAX + 1];//按索引下标访问
}
//copy + 赋值 实现自定义等号
Stack::Stack(const Stack & st)
{
	pitems = new Item[MAX + 1];
	memcpy(pitems + 1, st.pitems + 1, st.size * sizeof(Item));
	//这里的memcpy 不加1 默认从0开始 与后面pitems[top]中top从1开始矛盾
	size = st.size;
	top = st.top;
}
Stack::~Stack()
{
	delete[] pitems;
}
bool Stack::isempty()const 
{
	return top == 0;//0是不使用的
}
bool Stack::isfull()const
{
	return top == MAX;
}
bool Stack::push(const Item & item)
{
	//如何分配单个内存
	//pitems[size] = new Item[1];
  //  pitems
	if (size == MAX)return false;
	size++;
	top++;
	pitems[top] = item;
//	cout << top << " test push " << item << endl;
	return true;
}
bool Stack::pop(Item & item)
{
	if (!top)return false;
	item = pitems[top];
	//cout << item << " test " << top << endl;
	top--;
	size--;
	return true;
}
Stack & Stack::operator=(const Stack & st)
{
	//特判
	if (this == &st)return *this;
	size = st.size;
	top = st.top;
	delete[] pitems;
	pitems = new Item[MAX + 1];
	//删了原来的才能重新赋值为新的数组
	memcpy(pitems + 1, st.pitems + 1, size * sizeof(Item));
	return *this;
}