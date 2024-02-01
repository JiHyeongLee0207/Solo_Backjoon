#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n, m, cost = 0;
	cin >> n >> m;

	vector<int> v;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	int start = 0;
	for (int i = 0; i < m; i++) {
		int tmp;
		cin >> tmp;
		for (int j = start; j < n; j++) {
			if (v[j] < tmp)
				start++;
			else {
				v[j] -= tmp;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cost += v[i];
	cout << cost;
}