#include <bits/stdc++.h>
using namespace std;

const long long N = 1000000;
const int KMax = 77777;

bool Bilangan[N + 5];
int Prima1[KMax + 5];
int tc;

void Prima() {
	memset(Bilangan, 1, sizeof(Bilangan));
	for(long long i = 2; i <= sqrt(N); i++) {
		if (Bilangan[i]) {
			long long j = i*i;
			while(j <= N) {
				Bilangan[j] = false;
				j += i;
			}
		}
	}
	
	long long j = 1;
	
	for(long i = 2; i <= N; i++) {
		if(Bilangan[i]) {
			Prima1[j] = i;
			j++;
		} 
	}
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin >> tc;
	
	Prima();
	
	int x;
	while(tc--) {
		cin >> x;
		cout << Prima1[x] << '\n';		
	}
}
