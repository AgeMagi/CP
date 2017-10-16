#include <bits/stdc++.h>
using namespace std;

const int NMax = 75;

int M1[NMax+5][NMax+5];
int M2[NMax+5][NMax+5];
int N;

bool identik(int M1[][NMax+5], int M2[][NMax+5]) {
	bool identik = true;
	
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <=N; j++) {
			if (M1[i][j] != M2[i][j]) {
				identik = false;
				break;
			}
		}
		if (!identik) {
			break;
		}
	}
	
	return identik;
}

bool vertikal(int M1[][NMax+5], int M2[][NMax+5]) {
	bool vertikal = true;
	
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= N; j++) {
			if(M1[i][j] != M2[i][N-j+1]) {
				vertikal = false;
				break;
			}
		}
		if (!vertikal) {
			break;
		}
	}
	
	return vertikal;
}

bool horisontal(int M1[][NMax+5], int M2[][NMax+5]) {
	bool horisontal = true;
	
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= N; j++) {
			if (M1[i][j] != M2[N-i+1][j]) {
				horisontal = false;
				break;
			}
		}
		if (!horisontal) {
			break;
		}
	}
	
	return horisontal;
}

bool diagonal_kanan_bawah(int M1[][NMax+5], int M2[][NMax+5]) {
	bool diagonal = true;
	
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= N; j++) {
			if (M1[i][j] != M2[j][i]) {
				diagonal = false;
				break;
			}
		}
		if (!diagonal) {
			break;
		}
	}
	
	return diagonal;
}

bool diagonal_kiri_bawah(int M1[][NMax+5], int M2[][NMax+5]) {
	bool diagonal = true;
	
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= N; j++) {
			if (M1[i][j] != M2[N-j+1][N-i+1]) {
				diagonal = false;
				break;
			}
		}
		if (!diagonal) {
			break;
		}
	}
	
	return diagonal;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
		
	cin >> N >> N;
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= N; j++) {
			cin >> M1[i][j];
		}
	}
	cin >> N >> N;
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= N; j++) {
			cin >> M2[i][j];
		}
	}
	
	if(identik(M1, M2)) {
		cout << "identik\n";
	} else if(vertikal(M1, M2)) {
		cout << "vertikal\n";
	} else if(horisontal(M1, M2)) {
		cout << "horisontal\n";
	} else if(diagonal_kanan_bawah(M1, M2)) {
		cout << "diagonal kanan bawah\n";
	} else if(diagonal_kiri_bawah(M1, M2)) {
		cout << "diagonal kiri bawah\n";
	} else {
		cout << "tidak identik\n";
	}
}
