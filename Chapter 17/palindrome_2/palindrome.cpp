#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	int len = str.length();
	int flag = 0;
	for (int i = 0; i < len; i++)
	{
		int j = len - i - 1;
		if (ispunct(str[i]) && ispunct(str[j])) continue;
		if (tolower(str[i]) != tolower(str[j])) {flag = 1; break;}
	}
	if (flag) puts("False");
	else puts("Yes");
}