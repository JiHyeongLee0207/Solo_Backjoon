#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n, min = 1000001;
	vector<int> v;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int sum = i, tmp = i;
		while (tmp>=10) {
			sum += (tmp % 10);
			tmp /= 10;
		}
		sum += tmp;
		if (sum == n) {
			v.push_back(i);
			if (min > i)
				min = i;
		}
	}
	if (min == 1000001)
		cout << 0;
	else
		cout << min;
}