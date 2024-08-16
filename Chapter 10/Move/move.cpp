#include "move.h"
#include <iostream>
using namespace std;
int main()
{
	Move a = Move(1.0, 2.0);
	Move b = Move(3.0, 4.0);
	a.showmove();
	a.add(b).showmove();
	a.reset();
	a.showmove();
}
Move::Move(double a, double b)
{
	x = a; y = b;
}
void Move::showmove()const 
{
	cout << "X:" << x << " " << "Y:" << y << endl;
}
//�Ѿ�������const��ô�޸ģ�---����mutable
Move Move::add(const Move & m)const
{
//	x = m.x; y = m.y;//������const ���Եõ��������������ı�
	Move tmp;
	tmp = Move(m.x, m.y);
	return tmp;
}
void Move::reset(double a, double b)
{
	x = a; y = b;
}