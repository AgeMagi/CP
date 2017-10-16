#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	int x;
	int pembagi;
	
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> x;
		pembagi = 0;
		for (int j = 1; j <= (floor(sqrt(x))); j++) {
			if (x % j == 0) {
				pembagi++;
			}
			if (pembagi > 2) {
				cout << "BUKAN" << endl;
				break;
			}
		}
		if (pembagi <= 2) {
			cout << "YA" << endl;
		}	
	}
}
