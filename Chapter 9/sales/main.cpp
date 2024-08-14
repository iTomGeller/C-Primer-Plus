#include <iostream>
#include "sales.h"
int main()
{
	using namespace std;
	using namespace SALES;
	Sales a, b;
	double ar[4] = { 0.1,0.2,0.3,0.4 };
	setSales(a, ar, 4);
	setSales(b);

	showSales(a);
	showSales(b);
}