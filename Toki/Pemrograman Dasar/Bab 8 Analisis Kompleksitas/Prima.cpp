#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	int x;
	bool prima;
	
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> x;
		prima = true;
		for (int j = 2; j <= sqrt(x); j++) {
			if (x % j == 0) {
				prima = false;
			}
		}
		if (prima) {
			cout << "YA" << endl;
		} else {
			cout << "BUKAN" << endl;
		}
	}
}
