#include <bits/stdc++.h>
using namespace std;

typedef struct {
	long long x;
	long long y;
} Pecahan;

Pecahan P1;
Pecahan P2;

void sederhana(Pecahan *P1) {
	Pecahan P3;
	
	int k = (__gcd((*P1).x, (*P1).y));
	(P3).x = (*P1).x/k;
	(P3).y = (*P1).y/k;
	
	(*P1).x = P3.x;
	(*P1).y = P3.y;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	Pecahan P3;
	
	cin >> P1.x >> P1.y;
	cin >> P2.x >> P2.y;
	
	P3.x = P1.x*P2.y + P2.x*P1.y;
	P3.y = P1.y*P2.y;
	
	sederhana(&P3);
	
	cout << P3.x << " " << P3.y << '\n';
}
