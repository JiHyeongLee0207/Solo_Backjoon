#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<vector<int>> v;
	for (int i = 0; i < n; i++) { // no of students
		vector<int> vtmp;
		vtmp.push_back(0); // check
		vtmp.push_back(0); // same class count
		for (int j = 0; j < 5; j++) { // grade
			int tmp;
			cin >> tmp;

			vtmp.push_back(tmp);
		}
		v.push_back(vtmp);
	}


	for (int i = 0; i < n; i++) { // no of students
		for (int j = 2; j <= 6; j++) {
			for (int k = 0; k < n; k++) {
				if (v[k][0] == 0 && v[i][j] == v[k][j]) {
					v[i][1]++;
					v[k][0] = 1; // check
				}
			}
		}

		// check reset
		for (int j = 0; j < v.size(); j++) {
			v[j][0] = 0;
		}
	}

	int maxval = 0;
	int max = -1;
	for (int i = v.size() - 1; i >= 0; i--) {
		if (maxval <= v[i][1]) {
			maxval = v[i][1];
			max = i + 1;
		}
	}
	cout << max;
}