#include <iostream>
using namespace std;
template<typename T>
long double sum_values(T value)
{
	return value;//只有一个要特判
}
template<typename T, typename...Args>
//这里的两个参数都不为空 所以一个要特判
long double sum_values(T value, Args...args)
{
	long double sum = 0;
	sum += value;
	return sum + sum_values(args...);
}
int main()
{
	cout << sum_values(1, 2, 4, 2.5, 7);
	puts("");
	cout << sum_values(1);
}