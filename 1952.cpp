#include<iostream>
using namespace std;

int main() {
	int n, m, posx = 0, posy = 0, cnt = 0;
	bool arr[100][100];
	int state = 1; // 1: ������, 2: �Ʒ�, 3: ����, 4: ��
	cin >> m >> n; // ���� ����

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = false;
		}
	}

	arr[posx][posy] = true; // ������
	bool cant = false; // �������� ���� ���
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