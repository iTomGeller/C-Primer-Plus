#pragma once
#include <iostream>
using namespace std;//注意使用命名空间
template<typename T>
T average_list(initializer_list<T> args)
{
	T ans = 0;
	for (auto t : args)ans += t;
	return ans / args.size();
}