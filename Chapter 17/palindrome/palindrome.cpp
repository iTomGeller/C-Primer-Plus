#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	int flag = 0;
	int i = 0, j = str.length() - 1;
	while (i != j && !flag)
	{
		if (str[i] != str[j]){flag = 1; break;}		
		i++;
		j--;
	}
	if (flag) puts("False");
	else puts("Yes");
}