#include <bits/stdc++.h>
using namespace std;

const int NMax = 5;

int tc;
int N;
int Score[NMax + 5];
int Score1[NMax + 5]; 
bool Sudah[NMax+5][NMax+5];
bool Menang, Kalah, Seri;

void Mungkin(int i, int j, int Score[]) {	
	
	memset(Sudah, 0, sizeof(Sudah));
	memset(Score, 0, sizeof(Score));
	
	if (i > N) {
		bool Sama = true;
		for(int k = 1; k <= N; k++) {
			if (k != N) {
				cout << Score[k] << " ";
			} else {
				cout << Score[k] << endl;
			}
		}
	} else if (j > N) {
		Mungkin(i + 1, 1, Score);
	} else {
		for (int l = 1; l <= 3; l++) {
			if ((i != j) && (!Sudah[i][j])) {
				if (l == 1) {
					cout << i << j << endl;
					Score[i] += 3;
					Sudah[i][j] = true;
					Sudah[j][i] = true;
					Mungkin(i, j+1, Score);
					Score[i] -= 3;
					Sudah[i][j] = false;
					Sudah[j][i] = false;					
				}
				if (l == 2) {
					Score[j] += 3;
					Sudah[i][j] = true;
					Sudah[j][i] = true;
					Mungkin(i, j+1, Score);
					Score[j] -= 3;
					Sudah[i][j] = false;
					Sudah[j][i] = false;					
				} 
				if (l == 3) {
					Score[i] += 1;
					Score[j] += 1;
					Mungkin(i, j+1, Score);
					Score[i] -= 1;
					Score[j] -= 1;					
					Sudah[i][j] = false;
					Sudah[j][i] = false;					
				}				
			} else {
				Mungkin(i, j+1, Score);
			}
		}
	}
}

int main()
{
	cin >> tc;
	
	while (tc--) {
		cin >> N;
		int i = 1;
		Mungkin(1, 1, Score);		
		while(N--) {
			cin >> Score[i];
			i++;			
		}
	}
}
