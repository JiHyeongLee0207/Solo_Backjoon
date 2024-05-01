#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main() {

	for (int i = 1;; i++) {
		int n;
		cin >> n;
		if (n == 0) break;
		cout << "Group " << i << "\n";

		// input
		vector<string> name;
		vector<vector<char>> words;
		for (int j = 0; j < n; j++) { // each line
			string s; // name
			cin >> s;
			name.push_back(s);
			vector<char> tmp; // paper
			for (int k = 0; k < n - 1; k++) { // input for each paper
				char c;
				cin >> c;
				tmp.push_back(c);
			}
			words.push_back(tmp);
		}

		// output
		bool flag = true;
		for (int j = 0; j < n; j++) { // whose paper
			for (int k = 1; k <= n - 1; k++) {
				int pos = j - k; // whose word
				if (pos < 0) pos = n + pos;
				if (words[j][k - 1] == 'N') {
					cout << name[pos] << " was nasty about " << name[j] << "\n";
					flag = false;
				}
			}
		}
		if (flag) cout << "Nobody was nasty\n";
		cout << "\n";
	}
}