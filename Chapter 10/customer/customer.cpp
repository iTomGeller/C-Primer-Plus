#include <iostream>
using namespace std;
struct customer {
	char fullname[35];
	double payment;
};
typedef customer Item;
class stack {
private:
	const static int MAX = 10;
	int top;
	Item array[MAX];
	double run_tot;
public:
	stack();
	void push(const Item & x);//是在x前面加&
	void pop();
};
int main() {
	char name[35];
	stack *p = new stack();//new返回指针
	double money;
	//如何做到读入空行结束？看cin缓冲区
	Item tmp;//用tmp = {}会错
	cout << "Enter the name\n";
	cin >> tmp.fullname;
	cout << "Enter the money\n";
	cin >> tmp.payment;
	p -> push(tmp);
	char x;
	while (cin)
	{
		cin.get(x);
		//读入x 并存入缓冲区
		//读入空行 否则会影响后面判断
		cout << "Enter an empty line to quit\n";//通过判断cin来检测是否输入空行
		cout << "Enter the name\n";
		Item my;
		cin.get(my.fullname,35);//不能用cin >> name 这样会屏蔽掉空行与空格
		if (!cin)break;
		cout << "Enter the money\n";
		cin >> my.payment;
		p -> push(my);
	}
}
stack::stack()
{
	run_tot = 0;
	top = 0;
}
void stack::push(const Item & x){
	if (top >= MAX)cerr << "栈满无法入栈", top = MAX ;
	else array[top] = x, run_tot += x.payment;
	cout << "the running total is " << run_tot << endl;
	top++;
}
void stack::pop()
{
	if (!top)cerr << "栈空无法出栈";
	else {
		top--;
		cout << "the running total is " << run_tot << endl;
		run_tot -= array[top].payment;
	}
}