#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		double nsum = 0, msum = 0;
		cin >> n >> m;

		vector<int> v1;
		for (int i = 0; i < n; i++) {
			int tmp;
			cin >> tmp;
			v1.push_back(tmp);
			nsum += tmp;
		}
		for (int i = 0; i < m; i++) {
			int tmp;
			cin >> tmp;
			msum += tmp;
		}
		double na = nsum / n;
		double ma = msum / m;

		// C언어에서 평균보다 낮음
		vector<int> v2;
		for (int i = 0; i < n; i++) {
			if (v1[i] < na) {
				v2.push_back(v1[i]);
			}
		}

		// 경제학 원론에서 평균보다 높음
		int cnt = 0;
		for (int i = 0; i < v2.size(); i++) {
			if (v2[i] > ma) {
				cnt++;
			}
		}
		cout << cnt << "\n";
	}
}