#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int n, cnt = 0;
	cin >> n;
	int* arr = new int[n + 1];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if (n == 1) {
		cout << 0;
		delete[] arr;
		return 0;
	}
	sort(arr + 1, arr + n, compare);
	arr[n] = 0;
	int pos = arr[1];
	for (;;pos--) {
		bool largest = true;
		for (int i = 1; arr[i] == pos; i++) {
			if (arr[0] <= arr[i]) {
				arr[0]++;
				arr[i]--;
				cnt++;
			}
			else {
				cout << cnt;
				delete[] arr;
				return 0;
			}
		}
	}
}