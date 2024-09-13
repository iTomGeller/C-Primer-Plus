#include <iostream>
using namespace std;
template<typename T>
long double sum_values(T value)
{
	return value;//ֻ��һ��Ҫ����
}
template<typename T, typename...Args>
//�����������������Ϊ�� ����һ��Ҫ����
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