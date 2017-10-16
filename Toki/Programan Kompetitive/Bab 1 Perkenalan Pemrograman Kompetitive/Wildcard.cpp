#include <bits/stdc++.h>
using namespace std;

string x;
int n;
string y;

bool wild(string x, string y) {
	
	bool wild = false;
	
	if (x.length() <= y.length() + 1) {
		if (x.length() == 1) {
			wild = true;
		} else {
			if (x[x.length()-1] == '*') {
				wild = true;
				for(int i = 0; i < x.length() - 1; i++) {
					if (x[i] != y[i]) {
						wild = false;
						break;
					}
				}
	
			} else if (x[0] == '*'){
				wild = true;
				for(int i = 1; i < x.length(); i++) {
					if (x[i] != y[y.length() - x.length() + i]) {
						wild = false;
						break;
					}
				}
			} else {
				wild = true;
				int i = 0;
				while ((x[i] != '*') && wild) {
					if (x[i] != y[i]) {
						wild = false;
					} else {
						i++;
					}
				}
				i++;
				while(i < x.length() && wild) {
					if (x[i] != y[y.length() - x.length() + i]) {
						wild = false;
					} else {
						i++;
					}
				}
			}
		}		
	}
	
	return wild;
}

int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> x;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> y;
		if (wild(x, y)) {
			cout << y << endl;
		}
	}
	
	return 0;
}
