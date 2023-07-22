#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(vector<int>& v1, vector<int>& v2) {
	if (v1[0] == v2[0])
		return v1[1] < v2[1];
	else return v1[0] < v2[0];
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> v;
	while (n--) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end(), cmp);

	for (auto a : v)
		cout << a[0] << " " << a[1] << "\n";
}