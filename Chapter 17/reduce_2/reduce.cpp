#include "reduce.h"
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int ans;
	long ar1[100];
	string ar2[100];
	for (int i = 0; i < n; i++)cin >> ar1[i];
	ans = reduce<long>(ar1, n);
	cout << ans << endl;
	cin >> n;
	getchar();
	for (int i = 0; i < n; i++)
		getline(cin, ar2[i]);
    ans = reduce<string>(ar2, n);
	cout << ans << endl;
}