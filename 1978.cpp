#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	//�Է�
	int n, m, cnt = 0;
	int min = 0, max = 1000;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> *(arr + i);
		if (min > *(arr + i))
			min = *(arr + i);
		else if (max < *(arr + i))
			max = *(arr + i);
	}

	// �ߺ��� ���� ����
	int* dupl = new int[max + 1];
	for (int i = 0; i < max + 1; i++)
		*(dupl + i) = 0;			// [1~n]=0;
	for (int i = 0; i < n; i++)
		dupl[*(arr + i)]++;

	// ä�� �ɷ�����
	int pos = 2; // �ɷ��� ���
	int* chae = new int[max + 1];
	for (int i = 0; i < max + 1; i++)
		chae[i] = 1;	// �Ҽ� = 1, �Ҽ��ƴ� = 0;
	for (int pos = 2; pos < max;) {
		for (int j = pos + 1; j < max; j++)
			if (j % pos == 0)	// �Ҽ��� �ƴϸ�
				chae[j] = 0;	// ����
		do pos++; while (pos <= max && chae[pos] == 0);	// ���� �Ҽ��� ã����.
	}

	// ����
	for (int i = 2; i < max; i++)
		if (chae[i] == 1)
			cnt += dupl[i];
	cout << cnt;
}