#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n, p;
	cin >> n >> p;
	int pos = n;
	vector<int> v;
	vector<int> cycle;

	while (1) {
		auto it = find(v.begin(), v.end(), pos);
		if (it != v.end()) { // 중복 발견
			int start = it - v.begin();
			for (int i = start; i < v.size(); i++)
				cycle.push_back(v[i]);
			break;
		}
		v.push_back(pos);
		pos = (pos * n) % p;
	}
	cout << cycle.size();
}