#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;

	istringstream iss(s);
	vector<int> v;
	string num;
	while (getline(iss, num, ','))
		v.push_back(stoi(num));

	for (int i = 0; i < k; i++) {
		vector<int> tmp;
		for (int j = 0; j < v.size() - 1; j++) {
			tmp.push_back(v[j + 1] - v[j]);
		}
		v = tmp;
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
		if (i != v.size() - 1)
			cout << ',';
	}
}