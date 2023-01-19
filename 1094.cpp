#include<iostream>
using namespace std;

int main() {
	int stick = 64, sum = 0, x, cnt = 1;
	cin >> x;
	if (x == 64) { cout << cnt; return 0; }
	while (1) {
		stick /= 2;
		if (stick + sum < x) {
			sum += stick;
			cnt++;
		}
		cout << cnt << ", ";
		cout << stick << ", ";
		cout << sum << endl;
		if (stick + sum == x)
			break;
	}
	cout << cnt;
}