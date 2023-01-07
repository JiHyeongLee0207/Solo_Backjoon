#include<iostream>
using namespace std;

int main() {
	int N, F;
	int answer = 0;

	cin >> N >> F;
	N = N - (N % 100);
	for (int i = 0; i < 99; i++) {
		if (N % F == 0)
			break;
		N++;
		answer++;
	}
	if (answer < 10)
		cout << 0 << answer;
	else
		cout << answer;
}