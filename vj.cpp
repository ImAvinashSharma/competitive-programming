#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	string str;
	cin >> str;
	int n = str[n - 1];
	if (n % 2 == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	if (n % 4 == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	if (n % 8 == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}