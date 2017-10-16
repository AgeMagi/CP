#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	for (int i = x;i >= 1; i--) {
		if (x%i == 0) {
			cout << i << endl;
		}
	}
}
