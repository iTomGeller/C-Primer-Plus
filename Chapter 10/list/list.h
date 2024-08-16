#pragma once
#include <iostream>
using namespace std;
typedef int Item;
class list {
private:
	const static int MAXLEN = 5;
	int tot = 0;
	Item a[MAXLEN];
public:
	void add(Item & x);
	bool isempty();
	bool isfull();
	void update(int id, Item & x);
	void print(int id);
};