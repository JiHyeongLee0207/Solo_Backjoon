#include<iostream>
using namespace std;

int main() {
	int n, m, x = 0, y = 0;
	cin >> n >> m;

	if (m == 1) x = 3, y = 3;
	else
		for (int i = 2; i <= m + 2; i++) {
			if (m % i == 0) {
				int t1 = m / i, t2 = i;
				if ((t1 + 2) * (t2 + 2) == m + n && t1 * t2 == m) {
					if (t2 > t1) swap(t1, t2);
					x = t1 + 2, y = t2 + 2;
					break;
				}
			}
		}
	cout << x << " " << y;
}