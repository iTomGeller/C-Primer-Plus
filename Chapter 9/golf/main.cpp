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
	setgolf(x, buf, cap);//&x 传的时候直接传x 当成引用来看
	showgolf(x);
	cout << "Enter the new handicap\n";
	while (cin >> cap, ~cap )//以cap为-1结尾
	{
		handicap(x, cap);
		showgolf(x);
		cout << "Enter the new handicap\n";
	}
}