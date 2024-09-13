#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
auto outint_l = [](int n) {std::cout << n << " "; };

int main() {
	using std::cout;
	using std::endl;
	using std::list;
	int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
	list<int> yadayada(vals, vals + 10);  // range constructor
	list<int> etcetera(vals, vals + 10);
	// C++11 can use the following instead
	// list<int> yadayada = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
	// list<int> etcetera {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
	cout << "Original lists:\n";
	for_each(yadayada.begin(), yadayada.end(), outint_l);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint_l);
	cout << endl;
	yadayada.remove_if([](int n) {return n > 100; });
	etcetera.remove_if(
		[](int n) { return n > 200; });  // construct a function object
	cout << "Trimmed lists:\n";
	for_each(yadayada.begin(), yadayada.end(), outint_l);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint_l);
	cout << endl;
	return 0;
}