#include <string>
//string在string头文件 不在cstring里面
using namespace std;
class account {//class是小写
private:
	string name, number;
	int balance;
public:
	account(const string & name1, const string & number1);
	void deposite(int money);
	void display(const account & user);
	void withdraw(int money);
};