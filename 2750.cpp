#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	vector<int> v;
	int n;
	cin >> n;
	while (n--) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}