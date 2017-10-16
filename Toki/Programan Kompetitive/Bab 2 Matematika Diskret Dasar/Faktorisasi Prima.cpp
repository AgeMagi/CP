#include <bits/stdc++.h>
using namespace std;

int BanyakMembagi(int a, int b)
{
	int Banyak = 0;
	while (b % a == 0) {
		Banyak++;
		b = b/a;	
	}		
	
	return Banyak;
}

bool prima(int x)
{
	bool prime = true;
	
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			prime = false;
		}
	}
	
	return prime;
}


int main()
{
	int x;
	int Pembagi[10000];
	int temp = 0;
	int i = 2;
	int x_;

	cin >> x;
	
	x_ = x;

	if (prima(x)) {
		cout << x << endl;
	} else {
		while (!prima(x_)) {
			if ((prima(i)) && (x % i == 0)) {
				if (BanyakMembagi(i, x) == 1) {
					cout << i; 
				} else {
					cout << i << '^' << BanyakMembagi(i, x);
				}
				for (int j = 1; j <= BanyakMembagi(i, x); j++) {
					x_ = x_ / i;
				}
				if (x_ != 1) {
					cout << " x ";
				} else {
					cout << endl;
				}
			}
			i++;
		}
		if (x_ != 1) {
			cout << x_ << endl;
		}
	}
}
