#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int k = 0;
	for (int i = 1; i <= N; i ++) {
		for (int j = 1; j<= i; j++) {
			cout << k%10;
			k++;
		}
		cout << endl;
	}
}
