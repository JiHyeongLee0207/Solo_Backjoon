#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	v.push_back(0);
	int pos = *v.begin();
	int height = 0, max = 0;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] > v[i - 1])
			height += v[i] - v[i - 1];
		else {
			if (max < height)
				max = height;
			height = 0;
		}
	}
	cout << max;
}