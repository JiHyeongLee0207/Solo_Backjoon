#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, cnt = 0;
	cin >> n;

	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	for (int i = 0; i < n; i++) {
		bool flag = true;
		for (int j = 0; j < n; j++) {
			if (v[i].first > v[j].first && v[i].second >= v[j].second) {
				flag = false;
				break;
			}
			if(v[i].first >= v[j].first && v[i].second > v[j].second){
				flag = false;
				break;
			}}
		if (flag)
			cnt++;
	}
	cout << cnt;
}