#pragma once
namespace SALES {
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS] = {0};
		double average = 0;
		double max = 0;
		double min = 0;
	};
	void setSales(Sales & s, const double ar[], int n);
	void setSales(Sales & s);//&是引用不是取地址
	void showSales(const Sales & s);
}//namespace结尾无分号;