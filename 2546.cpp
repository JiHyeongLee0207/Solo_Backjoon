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

		// C���� ��պ��� ����
		vector<int> v2;
		for (int i = 0; i < n; i++) {
			if (v1[i] < na) {
				v2.push_back(v1[i]);
			}
		}

		// ������ ���п��� ��պ��� ����
		int cnt = 0;
		for (int i = 0; i < v2.size(); i++) {
			if (v2[i] > ma) {
				cnt++;
			}
		}
		cout << cnt << "\n";
	}
}