#include<iostream>
using namespace std;

int main() {
	long long k, n, max = 0, ans = 0;
	cin >> k >> n;
	long long* lans = new long long[k];
	for (int i = 0; i < k; i++) {
		cin >> lans[i];
		if (lans[i] > max)
			max = lans[i];
	}
	long long right = max, left = 1, middle = max;
	while (left <= right) {
		int cnt = 0;
		for (int j = 0; j < k; j++)
			cnt += lans[j] / middle;

		if (cnt < n)
			right = middle - 1;
		else
			left = middle + 1;
		middle = (left + right) / 2;
	}
	cout << middle;
}