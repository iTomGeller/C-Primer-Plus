#include <iostream>
#include <cstring>
struct chaff {
	char dross[20];
	int slag;
};
char buffer[50];
void assign_value(chaff * a, const char * p, int slag)
{
	strcpy_s(a->dross, p);//strcpy��������
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
	chaff * a = new (buffer) chaff;//��new����һ��ָ��
	//cin ����ʣ�µ� ����һ�� ��cin.ignore 
	cout << "Enter the dross\n";
	cin.get(buf, 20);
	cout << "Enter the slag\n";
	cin >> slag;
	assign_value(a, buf, slag);
	//chaff * b = new (buffer) chaff; ��ôд�Ḳ��
	chaff * b = new (buffer + sizeof(chaff))chaff;
	cin.get();//�ѵ�������cin �����ַ���ʱҪ����ϴεĻ��з�
			  //������cin >> slag ����Ҫ ��Ϊ����������
	cout << "Enter the dross\n";
	cin.get(buf, 20);
	cout << "Enter the slag\n";
	cin >> slag;

	assign_value(b, buf, slag);
	display(a);
	display(b);
}