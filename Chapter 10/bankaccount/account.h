#include <string>
//string��stringͷ�ļ� ����cstring����
using namespace std;
class account {//class��Сд
private:
	string name, number;
	int balance;
public:
	account(const string & name1, const string & number1);
	void deposite(int money);
	void display(const account & user);
	void withdraw(int money);
};