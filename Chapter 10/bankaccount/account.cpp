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
	cout << "该用户的名字为" << user.name
		<< ",账户为" << user.number << ",盈亏为" 
		<< user.balance << endl;
}
void account::withdraw(int money) {
	balance -= money;
}
void account::deposite(int money) {
	balance += money;
}