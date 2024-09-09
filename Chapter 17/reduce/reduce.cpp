#include <iostream>
#include <algorithm>
using namespace std;
int reduce(long ar[], int n)
{
	sort(ar, ar + n);
	auto pos = unique(ar, ar + n);
	return pos - ar;
}
int main()
{
	int n;
	cin >> n;
	long ar[100];
	for (int i = 0; i < n; i++)
		cin >> ar[i];
 int ans = reduce(ar, n);
 cout << ans;
}