#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int m, n;
	cin >> m >> n;

	int* arr = new int[n + 2];
	for (int i = 2; i < n + 1; i++)
		*(arr + i) = i; //2~n���� ����
	int check; // check = �Ҽ�
	for (check = 2; check <= n; check++) {
		if (*(arr + check) == 0) continue; // 0�� ��� ��ŵ
		for (int i = 2 * check; i <= n; i += check) // �ɷ�����
			*(arr + i) = 0;
	}
	for (int i = m; i <= n; i++) // ��� ���
		if (*(arr + i) != 0) cout << arr[i] << "\n";
	delete[] arr;
}