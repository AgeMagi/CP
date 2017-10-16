#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	int x;
	cin >> N;
	cin >> x;
	for (int i = 1; i < N; i++) {
		if (i % x == 0) {
			cout << "* "; 
		} else {
			cout << i << ' ';
		}
	}
	if (N%x == 0) {
		cout << '*' << endl;
	} else {
		cout << N << endl;
	}
}
