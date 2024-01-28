#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v;
	while (n--) {
		int file;
		cin >> file;
		v.push_back(file);
	}

	int c; // each clustesr size
	cin >> c;
	long long total = 0;
	for (int i = 0; i < v.size(); i++) {
		total += (v[i] / c) * c;
		if (v[i] % c != 0)
			total += c;
	}
	cout << total;
}