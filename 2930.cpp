#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, f, sum1 = 0, sum2 = 0;
	vector<string> v;
	string s, rule = "SPRS"; // Scissors, Paper, Rock

	cin >> n >> s >> f;
	for (int i = 0; i < f; i++) {
		string tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	// Calculate the total score
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < n; j++) {
			auto it = find(rule.begin(), rule.end() - 1, s[j]);
			if (v[i][j] == *it)
				sum1++;
			else if(v[i][j] == *(it + 1))
				sum1 += 2;


		}
	}

	// Calculate the maximum score
	for (int j = 0; j < n; j++) {
		int max = 0;
		for (int k = 0; k < 3; k++) {
			int tmp = 0;
			auto it = find(rule.begin(), rule.end() - 1, rule[k]);

			for (int i = 0; i < v.size(); i++) {
				if (v[i][j] == *it)
					tmp++;
				else if (v[i][j] == *(it + 1))
					tmp += 2;
				if (tmp > max)
					max = tmp;
			}
		}
		sum2 += max;
	}
	cout << sum1 << "\n" << sum2;
}