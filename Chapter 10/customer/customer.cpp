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
	void push(const Item & x);//����xǰ���&
	void pop();
};
int main() {
	char name[35];
	stack *p = new stack();//new����ָ��
	double money;
	//�������������н�������cin������
	Item tmp;//��tmp = {}���
	cout << "Enter the name\n";
	cin >> tmp.fullname;
	cout << "Enter the money\n";
	cin >> tmp.payment;
	p -> push(tmp);
	char x;
	while (cin)
	{
		cin.get(x);
		//����x �����뻺����
		//������� �����Ӱ������ж�
		cout << "Enter an empty line to quit\n";//ͨ���ж�cin������Ƿ��������
		cout << "Enter the name\n";
		Item my;
		cin.get(my.fullname,35);//������cin >> name ���������ε�������ո�
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
	if (top >= MAX)cerr << "ջ���޷���ջ", top = MAX ;
	else array[top] = x, run_tot += x.payment;
	cout << "the running total is " << run_tot << endl;
	top++;
}
void stack::pop()
{
	if (!top)cerr << "ջ���޷���ջ";
	else {
		top--;
		cout << "the running total is " << run_tot << endl;
		run_tot -= array[top].payment;
	}
}