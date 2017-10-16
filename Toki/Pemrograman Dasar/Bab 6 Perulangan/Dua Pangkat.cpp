#include <bits/stdc++.h>
using namespace std;

int main()
{
	float x;
	cin >> x;
	while (x > 1) {
		x = x/2;
	}
	if (x == 1) {
		cout << "ya" << endl;
	} else {
		cout << "bukan" << endl;
	}
}
