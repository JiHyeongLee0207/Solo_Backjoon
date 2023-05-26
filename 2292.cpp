#include<iostream>
using namespace std;

int main() {
	int n, min = 1, max = 1, cnt = 1;
	cin >> n;
	int gap = 6;
	if (n == 1) {
		cout << n;
		return 0;
	}
	while (1) {
		cnt++;
		max += gap;
		if (n > min && n <= max)
			break;
		gap += 6;
	}
	cout << cnt;
}