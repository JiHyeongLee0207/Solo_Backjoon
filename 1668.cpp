#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;

		v.push_back(tmp);
	}

	int cnt = 0, max = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] > max) {
			max = v[i];
			cnt++;
		}
	}
	cout << cnt << "\n";

	cnt = 0, max = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (v[i] > max) {
			max = v[i];
			cnt++;
		}
	}
	cout << cnt << "\n";
}