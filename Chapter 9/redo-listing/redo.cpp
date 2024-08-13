#include <iostream>
#include <string>//在visual studio 得用string 而不是 cstring
void strcount(std::string str);
int main()
{
	using namespace std;
	string input;
/*	while (cin >> input) {
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
	}*/
	//得用getline(cin, str)来得到一行-对应string类型
	while (getline(cin, input), input.size())
	{
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
	}
	cout << "Bye\n";
}
void strcount(std::string str)
{
	using namespace std;
	static int total = 0;
	int count = str.length();
	cout << "\"" << str << "\" contains ";
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";

}