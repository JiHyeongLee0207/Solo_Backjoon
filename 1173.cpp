#include<iostream>
using namespace std;

int main() {
	int N, T, R, M, m, X;
	int cnt = 0;
	cin >> N >> m >> M >> T >> R;
	if (M - m < T) { cout << -1; return 0; }

	X = m;
	while (N != 0) {
		if (X + T <= M) {
			X += T;
			N--;
		}
		else {
			X -= R;
			if (X < m) X = m;
		}
		cnt++;
	}
	cout << cnt;
}