#include <iostream>
#include <string>//��visual studio ����string ������ cstring
void strcount(std::string str);
int main()
{
	using namespace std;
	string input;
/*	while (cin >> input) {
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
	}*/
	//����getline(cin, str)���õ�һ��-��Ӧstring����
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