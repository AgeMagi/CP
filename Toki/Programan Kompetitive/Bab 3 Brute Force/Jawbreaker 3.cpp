#include <bits/stdc++.h>
using namespace std;

int N;
int M;
char Matriks[26][26];
int Sudah[26][26];
int banyak;

void Jawbreaker(int i, int j, char x) {
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

void Ubah(int i, int j, char x) {
	if (Sudah[i][j]) {
		return;
	} else {
		if (Matriks[i][j] == x) {
			Sudah[i][j] = true;
			Matriks[i][j] = '.';
			if (i > 0) {
				Ubah(i - 1, j, x);
			}
			if (j > 0) {
				Ubah(i, j - 1, x);
			} 
			if (i < N-1) {
				Ubah(i + 1, j, x);
			}
			if (j < M-1) {
				Ubah(i, j + 1, x);
			}
		} 			
	}
}

void Runtuh() {
	for(int i = 0; i < N;i++) {
		for(int j = 0; j < M; j++) {
			if (Matriks[i][j] == '.') {
				int k = i-1;
				int l = i;
				while(k != -1) {
					if (Matriks[k][j] == '.') {
						k--;
					} else {
						swap(Matriks[k][j], Matriks[l][j]);
						l = k;
						k--;						
					}
				}
			}
		}
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
	
	memset(Sudah, 0, sizeof(Sudah));
	
	char x = Matriks[k][l];
	
	Ubah(k, l, x);
	Runtuh();
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			if (j != 0) {
				printf(" ");
			}
			printf("%c", Matriks[i][j]);
		}
		cout << "\n";
	}
}
