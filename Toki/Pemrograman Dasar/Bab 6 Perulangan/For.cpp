#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	int jumlah = 0;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> x;
		jumlah = jumlah + x;
	}
	cout << jumlah << endl;
}
