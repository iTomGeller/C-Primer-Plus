#pragma once
#include <iostream>
using namespace std;//ע��ʹ�������ռ�
template<typename T>
T average_list(initializer_list<T> args)
{
	T ans = 0;
	for (auto t : args)ans += t;
	return ans / args.size();
}