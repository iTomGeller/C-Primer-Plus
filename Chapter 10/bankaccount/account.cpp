#include <iostream>
#include "account.h"
using namespace std;
int main()
{

}
account::account(const string & name1, const string & number1)
{
	name = name1;
	number = number1;
}
void account::display(const account & user)
{
	cout << "���û�������Ϊ" << user.name
		<< ",�˻�Ϊ" << user.number << ",ӯ��Ϊ" 
		<< user.balance << endl;
}
void account::withdraw(int money) {
	balance -= money;
}
void account::deposite(int money) {
	balance += money;
}