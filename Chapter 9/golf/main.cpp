#include <iostream>
#include "golf.h"
int main()
{
	using namespace std;
	char buf[40]; 
	int cap;
	golf x;
	cout << "Enter the fullname\n";
	cin.getline(buf, 40);
	cout << "Enter the handicap\n";
	cin >> cap;
	setgolf(x, buf, cap);//&x ����ʱ��ֱ�Ӵ�x ������������
	showgolf(x);
	cout << "Enter the new handicap\n";
	while (cin >> cap, ~cap )//��capΪ-1��β
	{
		handicap(x, cap);
		showgolf(x);
		cout << "Enter the new handicap\n";
	}
}