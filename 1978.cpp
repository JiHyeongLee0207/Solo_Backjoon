#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	//입력
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

	// 중복된 개수 세기
	int* dupl = new int[max + 1];
	for (int i = 0; i < max + 1; i++)
		*(dupl + i) = 0;			// [1~n]=0;
	for (int i = 0; i < n; i++)
		dupl[*(arr + i)]++;

	// 채로 걸러내기
	int pos = 2; // 걸러낼 배수
	int* chae = new int[max + 1];
	for (int i = 0; i < max + 1; i++)
		chae[i] = 1;	// 소수 = 1, 소수아님 = 0;
	for (int pos = 2; pos < max;) {
		for (int j = pos + 1; j < max; j++)
			if (j % pos == 0)	// 소수가 아니면
				chae[j] = 0;	// 제거
		do pos++; while (pos <= max && chae[pos] == 0);	// 다음 소수를 찾으면.
	}

	// 총합
	for (int i = 2; i < max; i++)
		if (chae[i] == 1)
			cnt += dupl[i];
	cout << cnt;
}