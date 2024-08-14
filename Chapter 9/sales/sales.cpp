#include <iostream>
#include "sales.h"
#include <cmath>
using namespace std;
//using namespace SALES;
//要以namespace SALES来实现
namespace SALES {
	void setSales(Sales & s, const double ar[], int n)
	{
		n = n <= 4 ? 4 : n;
		double minx = 1e6, maxx = 0;
		double avg = 0;
		for (int i = 0; i < n; i++) {
			s.sales[i] = ar[i], avg += ar[i];
			double x = ar[i];
			minx = minx >= x ? x : minx;
			maxx = maxx <= x ? x : maxx;
		}
		avg /= n;
		s.average = avg;
		s.max = maxx;
		s.min = minx;
	}
	//interactive
	void setSales(Sales & s) {
		cout << "Enter your four values \n";
		double avg = 0;
		double minx = 1e6, maxx = 0;
		for (int i = 0; i < 4; i++) {
			double x; cin >> x;
			s.sales[i] = x, avg += x;
			minx = minx >= x ? x : minx;
			maxx = maxx <= x ? x : maxx;
		}
		avg /= 4;
		s.average = avg;
		s.max = maxx;
		s.min = minx;
	}
	void showSales(const Sales & s)
	{
		cout << "The sales are " << s.sales[0] << " "
			<< s.sales[1] << " " << s.sales[2] << " "
			<< s.sales[3] << endl;
		cout << "average:" << s.average << " "
			<< "max:" << s.max << " min:" << s.min << endl;
	}
}