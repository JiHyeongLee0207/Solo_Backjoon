#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int m, n;
	cin >> m >> n;

	int* arr = new int[n + 2];
	for (int i = 2; i < n + 1; i++)
		*(arr + i) = i; //2~n까지 저장
	int check; // check = 소수
	for (check = 2; check <= n; check++) {
		if (*(arr + check) == 0) continue; // 0인 경우 스킵
		for (int i = 2 * check; i <= n; i += check) // 걸러내기
			*(arr + i) = 0;
	}
	for (int i = m; i <= n; i++) // 결과 출력
		if (*(arr + i) != 0) cout << arr[i] << "\n";
	delete[] arr;
}