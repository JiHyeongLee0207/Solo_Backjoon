#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;

	vector<int> v;
	int pos = 1;
	while (n--) {
		int tmp;
		cin >> tmp;
		for (int i = 0; i < tmp; i++)
			v.push_back(pos);
		pos++;
	}
	while (q--) {
		int tmp;
		cin >> tmp;
		cout << v[tmp] << "\n";
	}
}