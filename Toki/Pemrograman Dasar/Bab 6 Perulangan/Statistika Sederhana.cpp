#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	int x;
	int min, max = 0;
	min = 9999;
	max = -9999;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> x;
		if (min > x) {
			min = x;
		}
		if (max < x) {
			max = x;
		}
 	}
 	cout << max << ' ' << min << endl;
}
