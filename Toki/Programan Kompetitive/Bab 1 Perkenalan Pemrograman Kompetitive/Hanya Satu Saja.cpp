#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	string b;
	int beda = 0;
	
	cin >> a >> b;
	
	if (a.length() - 1 != b.length()) {
		printf("Wah, tidak bisa :(\n");	
	} else {
		int i = 0;
		while(i < b.length()) {
			if (a[i] != b[i]) {
				beda++;
				break;
			} else {
				i++;
			}
		}
		while(i < b.length()) {
			if (a[i+1] != b[i]) {
				beda++;
				break;
			} else {
				i++;
			}
		}
		if (beda == 2) {
			printf("Wah, tidak bisa :(\n");
		} else {
			printf("Tentu saja bisa!\n");
		}
	}
	
	return 0;
}
