#pragma once
#include <string>
using namespace std;
class Person {
private:
	//const 只能在构造函数初始化列表中初始化
	//static使得class所有实例都可以访问这个变量 所以不能在内部实现
	static const int LIMIT = 25;
	string lname;       // Person’s last name
	char fname[LIMIT];  // Person’s first name
public:
	Person() { lname = ""; fname[0] = '\0'; } // #1
	Person(const string & ln, const char * fn = "Heyyou");   // #2
	// the following methods display lname and fname
	void Show() const;        // firstname lastname format
	void FormalShow() const;  // lastname, firstname format
};