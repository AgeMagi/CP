#include <bits/stdc++.h>
using namespace std;

int N;
int M;
int Matriks[26][26];
int Sudah[26][26];
int banyak;

void Jawbreaker(int i, int j, int x) {
	if (Sudah[i][j]) {
		return;		
	} else {
		if (Matriks[i][j] == x) {
			Sudah[i][j] = true;
			banyak++;
			if (i > 0) {
				Jawbreaker(i - 1, j, x);
			}
			if (j > 0) {
				Jawbreaker(i, j - 1, x);
			} 
			if (i < N-1) {
				Jawbreaker(i + 1, j, x);
			}
			if (j < M-1) {
				Jawbreaker(i, j + 1, x);
			}
		} 
	}
}

void Runtuh(int k, int l) {
	if (Sudah[i][j]) {
		
	}
}

int main()
{
	cin >> N >> M;
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			cin >> Matriks[i][j];
		}
	}
	
	int ans = 0;
	int k;
	int l;
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			banyak = 0;
			memset(Sudah, 0, sizeof(Sudah));
			Jawbreaker(i, j, Matriks[i][j]);
			if (banyak > ans) {
				ans = banyak;
				k = i;
				l = j;
			}
		}
	}
	
	cout << ans*(ans-1) << endl;
}
