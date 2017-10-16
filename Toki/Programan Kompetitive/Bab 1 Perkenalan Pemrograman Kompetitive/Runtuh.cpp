#include<bits/stdc++.h>
using namespace std;

const int RMax = 20;
const int CMax = 8;

int R, C;
int Bangunan[100][100];
string x;

bool full1(int i) {
	bool full = true;
	for(int j = 1; j <= C; j++) {
		if (Bangunan[i][j] != 1) {
			full = false;
			break;
		}
	}
	
	return full;
}

void full0(int i) {
	for(int j = 1; j <= C; j++) {
		Bangunan[i][j] = 0;
	}
}

int main()
{
	scanf("%d %d", &R, &C);
	for(int i = 1; i <= R; i++) {
		cin >> x;
		for(int j = 0; j < C; j++) {
			Bangunan[i][j+1] = x[j] - 48;
		}
	}
	
	bool Ketemu = true;
	
	while (Ketemu) {
		Ketemu = false;
		int k;
		for(int i = 1; i <= R; i++) {
			if (full1(i)) {
				Ketemu = true;
				k = i;
				full0(k);
			}
		}
		for(int i = k - 1; i >= 1; i--) {
			for(int j = 1; j <= C; j++) {
				if (Bangunan[i][j] == 1) {
					int l = i+1;
					while(Bangunan[l][j] == 0 && l <= R) {
						l++;
					}
					swap(Bangunan[i][j], Bangunan[l-1][j]);
				}
			}
		}		
	}
	
	for(int i = 1; i <= R; i++) {
		for(int j = 1; j <= C; j++) {
			printf("%d", Bangunan[i][j]);
		}
		printf("\n");
	}
}
