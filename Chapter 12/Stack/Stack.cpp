#include "Stack.h"
#include <iostream>
#include <string>
using namespace std;
Stack::Stack(int n) : size(0), top(0)
{
	pitems = new Item[MAX + 1];//�������±����
}
//copy + ��ֵ ʵ���Զ���Ⱥ�
Stack::Stack(const Stack & st)
{
	pitems = new Item[MAX + 1];
	memcpy(pitems + 1, st.pitems + 1, st.size * sizeof(Item));
	//�����memcpy ����1 Ĭ�ϴ�0��ʼ �����pitems[top]��top��1��ʼì��
	size = st.size;
	top = st.top;
}
Stack::~Stack()
{
	delete[] pitems;
}
bool Stack::isempty()const 
{
	return top == 0;//0�ǲ�ʹ�õ�
}
bool Stack::isfull()const
{
	return top == MAX;
}
bool Stack::push(const Item & item)
{
	//��η��䵥���ڴ�
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
	//����
	if (this == &st)return *this;
	size = st.size;
	top = st.top;
	delete[] pitems;
	pitems = new Item[MAX + 1];
	//ɾ��ԭ���Ĳ������¸�ֵΪ�µ�����
	memcpy(pitems + 1, st.pitems + 1, size * sizeof(Item));
	return *this;
}