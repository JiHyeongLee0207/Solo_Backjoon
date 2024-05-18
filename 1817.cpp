#include<iostream>
using namespace std;

int main() {
	int n, m, i = 0, cnt = 1;
	cin >> n >> m;

	if (n == 0) {
		cout << 0;
		return 0;
	}
	int left = m;
	for (; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp > left) {
			left = m - tmp;
			cnt++;
		}
		else left -= tmp;
		
	}
	cout << cnt;
}