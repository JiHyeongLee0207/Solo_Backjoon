#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		int m, cnt = 0;
		double sum = 0;
		vector<int> v;
		cin >> m;
		for (int i = 0; i < m; i++) {
			int tmp;
			cin >> tmp;
			sum += tmp;
			v.push_back(tmp);
		}
		double avg = sum / m;
		for (int i = 0; i < m; i++) {
			if(avg < v[i])
				cnt++;
		}
		cout << fixed << setprecision(3) << (double)cnt / m * 100 << "%\n";
	}
}