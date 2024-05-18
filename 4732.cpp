#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main() {
	string rule[] = {"A","A#","B","C","C#",
			"D","D#","E","F","F#","G","G#"};
	string s; // 받을 문자열
	while (1) {
		getline(cin, s);
		if (s == "***") break;

		stringstream ss(s);
		vector<string> v;
		string tmp;

		int n; // 오차
		while (ss >> tmp) {
			v.push_back(tmp);
		}
		cin >> n; cin.ignore();
		for (int k = 0; k < v.size(); k++) {
			int pos;
			for (int i = 0; i <= 11; i++) {
				if (rule[i].find(v[k][0]) == 0) {
					pos = i;
					break;
				}
			}
			if (v[k].size() == 2) {
				char c = v[k][1];
				if (c == '#')
					pos++;
				else if (c == 'b')
					pos--;
			}
			pos += n;
			while (pos > 11)
				pos -= 12;
			while (pos < 0)
				pos += 12;
			cout << rule[pos] << " ";
		}
		cout << "\n";
	}
}