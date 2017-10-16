#include <bits/stdc++.h>
using namespace std;

const int NMax = 20;

int tc;
int hari = 1;

int lcm(int a, int b) {
	return (a*b/(__gcd(a, b)));
}


int main()
{
	int a;
	
	cin >> tc;
	while (tc--) {
		cin >>	a;
		hari = lcm(hari, a);		
	}
	
	cout << hari << '\n';
}
