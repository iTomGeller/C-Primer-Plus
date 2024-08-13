#include <iostream>
#include <cstring>
struct chaff {
	char dross[20];
	int slag;
};
char buffer[50];
void assign_value(chaff * a, const char * p, int slag)
{
	strcpy_s(a->dross, p);//strcpy两个参数
	a->slag = slag;
}
void display(chaff * a)
{
	std::cout << "The dross is " << a->dross << std::endl;
	std::cout << ",the slag is " << a->slag << std::endl;
}
int main()
{
	using namespace std;
	char buf[20];
	int slag;
	chaff * a = new (buffer) chaff;//用new返回一个指针
	//cin 忽视剩下的 到下一行 用cin.ignore 
	cout << "Enter the dross\n";
	cin.get(buf, 20);
	cout << "Enter the slag\n";
	cin >> slag;
	assign_value(a, buf, slag);
	//chaff * b = new (buffer) chaff; 这么写会覆盖
	chaff * b = new (buffer + sizeof(chaff))chaff;
	cin.get();//难点在于用cin 读入字符串时要清空上次的换行符
			  //而对于cin >> slag 不需要 因为是输入整数
	cout << "Enter the dross\n";
	cin.get(buf, 20);
	cout << "Enter the slag\n";
	cin >> slag;

	assign_value(b, buf, slag);
	display(a);
	display(b);
}