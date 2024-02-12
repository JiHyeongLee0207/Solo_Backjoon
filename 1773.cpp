#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, time;
	cin >> n >> time;

	int cnt = 0;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	for (int t = 1; t <= time; t++) {
		for (int i = 0; i < n; i++) {
			if (t % *(v.begin() + i) == 0) {
				cnt++;
				break;
			}
		}
	}
	cout << cnt;
}