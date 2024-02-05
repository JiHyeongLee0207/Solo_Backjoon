#include<iostream>
using namespace std;

int main() {
	int n, pos = 1, cnt = 0;
	cin >> n;

	while (n) {
		if (n < pos)
			pos = 1;
		n -= pos++;
		cnt++;
	}
	cout << cnt;
}