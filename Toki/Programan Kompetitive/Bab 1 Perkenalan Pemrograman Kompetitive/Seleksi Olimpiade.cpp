#include <bits/stdc++.h>
using namespace std;

int t;
int N, M;
pair<string, pair<int, pair<int, int>>> Nilai[85];
string Nama;
int Nilai1, Nilai2, Nilai3;
string x;

bool sorttrue(pair<string, pair<int, pair<int, int>>> a, pair<string, pair<int, pair<int, int>>> b) {
	bool sorttrue = false;
	
	if (a.second.second.second > b.second.second.second) {
		sorttrue = true;
	} else if (a.second.second.second == b.second.second.second) {
		if (a.second.second.first > b.second.second.first) {
			sorttrue = true;
		} else if (a.second.second.first == b.second.second.first) {
			if (a.second.first > b.second.first) {
				sorttrue = true;
			}
		}
	}
	
	return sorttrue;
}

int main()
{
	scanf("%d", &t);
	
	for(int tc = 1; tc <= t; tc++) {
		scanf("%d %d", &N, &M);
		cin >> x;
		for(int i = 1;i <= N; i++) {
			cin >> Nama >> Nilai1 >> Nilai2 >> Nilai3;
			Nilai[i] = make_pair(Nama, make_pair(Nilai1, make_pair(Nilai2, Nilai3))); 
		}
		sort(Nilai + 1, Nilai + N + 1, sorttrue);
		bool Ketemu = false;
		for(int i = 1; i <= M; i++) {
			if (Nilai[i].first == x) {
				Ketemu = true;
				break;
			}
		}
		
		if (Ketemu) {
			printf("YA\n");
		} else {
			printf("TIDAK\n");
		}
	}
	
	return 0;
}
