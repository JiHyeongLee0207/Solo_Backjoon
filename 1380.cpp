#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	vector<pair<int, string>> output;
	for (int t = 1;; t++) {
		int n;
		cin >> n;
		if (n == 0) break;

		cin.ignore();
		vector<string> v;
		v.push_back("");
		for (int i = 1; i <= n; i++) {
			string s;
			getline(cin, s);
			v.push_back(s);
		}

		vector<bool> flag(n + 1, true);
		for (int i = 0; i < 2 * n - 1; i++) {
			int a;
			char b;
			cin >> a >> b;
			flag[a] = !flag[a];
		}
		for (int i = 1; i <= n; i++) {
			if (!flag[i])
				output.push_back(make_pair(t, v[i]));
		}
	}
	for(int i=0; i<output.size(); i++)
		cout << output[i].first << " " << output[i].second << "\n";
}