#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		if (i == 42) {
			cout << "ERROR" << endl;
			break;
		}
		if (i%10 == 0) continue;
		cout << i << endl;
	}
	
	return 0;
}
