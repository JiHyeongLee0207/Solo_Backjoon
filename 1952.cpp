#include<iostream>
using namespace std;

int main() {
	int n, m, posx = 0, posy = 0, cnt = 0;
	bool arr[100][100];
	int state = 1; // 1: 오른쪽, 2: 아래, 3: 왼쪽, 4: 위
	cin >> m >> n; // 세로 가로

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = false;
		}
	}

	arr[posx][posy] = true; // 시작점
	bool cant = false; // 연속으로 막힌 경우
	while (1) {
		if (state == 1) {
			if (posx + 1 < n && !arr[posx + 1][posy]) {
				posx++;
				cant = false;
			}
			else {
				if (cant) break;
				state = 2;
				cnt++;
				cant = true;
			}
			arr[posx][posy] = true;
		}
		if (state == 2) {
			if (posy + 1 < m && !arr[posx][posy + 1]) {
				posy++;
				cant = false;
			}
			else {
				if (cant) break;
				state = 3;
				cnt++;
				cant = true;
			}
			arr[posx][posy] = true;
		}
		if (state == 3) {
			if (posx - 1 >= 0 && !arr[posx - 1][posy]) {
				posx--;
				cant = false;
			}
			else {
				if (cant) break;
				state = 4;
				cnt++;
				cant = true;
			}
			arr[posx][posy] = true;
		}
		if (state == 4) {
			if (posy - 1 >= 0 && !arr[posx][posy - 1]) {
				posy--;
				cant = false;
			}
			else {
				if (cant) break;
				state = 1;
				cnt++;
				cant = true;
			}
			arr[posx][posy] = true;
		}
	}
	cout << cnt - 1;
}