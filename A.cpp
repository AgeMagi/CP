#include <bits/stdc++.h>
using namespace std;

int N;
int M;
int arr1[10];
int arr2[10];
bool sudah[10];
bool ketemu;

int main() {
	ketemu = false;
	memset(sudah, 0, sizeof(sudah));
	
	cin >> N >> M;
	for(int i = 0; i < N; i++) {
		cin >> arr1[i];
		sudah[arr1[i]] = true;
	}
	for(int i = 0; i < M; i++) {
		cin >> arr2[i];
	}
	sort(arr2, arr2+M);
	for(int i = 0; i < M; i++) {
		if (sudah[arr2[i]]) {
			cout << arr2[i];
			ketemu = true;
			break;
		}
	}
	if (!ketemu) {
		sort(arr1, arr1+N);
		if (arr1[0] > arr2[0]) {
			cout << arr2[0] << arr1[0] << "\n";
		} else {
			cout << arr1[0] << arr2[0] << "\n";
		}
	}
	
}
