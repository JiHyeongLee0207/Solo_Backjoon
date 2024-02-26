#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> v;
	int n, m;
	cin >> n >> m;

	if (m == 1) {
		cout << -1;
		return 0;
	}
	v.push_back(2);
	for (int i = 3; i <= m; i++) {
		bool check = true;
		for (int j = 0; j < v.size(); j++) {
			if (i % v[j] == 0)
				check = false;
		}
		if (check)
			v.push_back(i);
	}

	int sum = 0, min = 0;
	if (v.size() != 0)
		min = v[v.size() - 1];
	for (int i = v.size() - 1; i >= 0; i--) {
		if (v[i] >= n)
			sum += v[i];
		if (v[i] < n)
			break;
		else
			min = v[i];
	}
	if (sum != 0)
		cout << sum << "\n" << min;
	else
		cout << -1;
}