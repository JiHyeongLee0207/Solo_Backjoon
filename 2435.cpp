#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
	int n, m, max = INT_MIN;
	cin >> n >> m;

	vector<int> v;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	for (int i = 0; i <= n - m; i++) {
		int sum = 0;
		for (int j = i; j < i + m; j++)
			sum += v[j];
		if(sum > max)
			max = sum;
	}
	cout << max;
}