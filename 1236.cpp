#include<iostream>
#include<string>
using namespace std;

int main() {
	int x, y, cnt = 0;
	cin >> x >> y;

	string* s = new string[x];
	for (int i = 0; i < x; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++) {
			if (s[i][j] == 'X') {
				for (int a = 0; a < y; a++)
					if (s[i][a] != 'X')
						s[i][a] = 'P';
				for (int a = 0; a < x; a++)
					if (s[a][j] != 'X')
						s[a][j] = 'P';
			}
		}

	//x축이나 y축 모두 p거나 .이면 cnt++하고 그 자리 X로 만듬
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			int cntX = 0, cntY = 0;
			if (s[i][j] != 'X') {
				for (int a = 0; a < y; a++)
					if (s[i][a] != 'X')
						cntX++;
				for (int a = 0; a < x; a++)
					if (s[a][j] != 'X')
						cntY++;
			}
			if (cntX == y && cntY == x) {
				s[i][j] = 'X';
				cnt++;
			}
		}
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			int cntX = 0, cntY = 0;
			if (s[i][j] != 'X') {
				for (int a = 0; a < y; a++)
					if (s[i][a] != 'X')
						cntX++;
				for (int a = 0; a < x; a++)
					if (s[a][j] != 'X')
						cntY++;
			}
			if ((cntY == x) || (cntX == y)) {
				s[i][j] = 'X';
				cnt++;
			}
		}
	}
	cout << cnt;

	delete[] s;
}