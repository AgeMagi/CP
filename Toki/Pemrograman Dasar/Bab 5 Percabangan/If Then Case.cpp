#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	if (x < 10) {
		cout << "satuan" << endl;
	} else if (x < 100) {
		cout << "puluhan" << endl;
	} else if (x < 1000) {
		cout << "ratusan" << endl;
	} else if (x < 10000) {
		cout << "ribuan" << endl;
	} else if (x < 100000) {
		cout << "puluhribuan" << endl;
	}
}
