/*
	could use binary_search(being,end,value);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	vector<long long> v;
	int n;
	cin >> n;

	while (n--) {
		long long tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());

	int m;
	cin >> m;

	while (m--) {
		long long tmp;
		bool in = false;
		cin >> tmp;

		if (tmp < v.front() || tmp > v.back());
		else {
			long long left = 0;
			long long right = v.size() - 1;
			long long middle = v.size() / 2;
			while (left <= right) {
				if (tmp == v.at(middle)) {
					in = true;
					break;
				}
				else if (tmp > v.at(middle))
					left = middle + 1;
				else if (tmp < v.at(middle))
					right = middle - 1;
				middle = (left + right) / 2;
			}
		}
		if (in)
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}
}