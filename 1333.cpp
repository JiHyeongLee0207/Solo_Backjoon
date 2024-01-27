#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t = 0;
	int n, l, d;
	cin >> n >> l >> d;

	int sCnt = 0, bCnt = 0;
	bool s = true, b = true, sOver = true;
	int album = n * (l + 5) - 5;
	for (int i = 0; i < album; i++) {
		// Start Checking
		if (sCnt == 0)
			s = true;
		if (bCnt == 0)
			b = true;

		// End Checking
		if (sCnt == l) {
			s = false;
			sCnt = -5;
		}
		if (bCnt == 1) {
			b = false;
			bCnt = -d + 1; // Except duration of bell
		}

		// Can hear bell sound
		if (!s && b) {
			sOver = false;
			break;
		}

		t++;
		sCnt++;
		bCnt++;
	}
	if (!sOver)
		cout << t;
	else {
		t = 0;
		while (t < album)
			t += d;
		cout << t;
	}
}