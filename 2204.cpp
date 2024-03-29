#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	while(1) {
		int n;
		cin >> n;
		if (!n)
			break;
		vector<pair<string, string>>v;
		string str;
		for (int i = 0; i < n; i++) {
			cin >> str;
			string tmp;
			for (int j = 0; j < str.size(); j++)
				tmp += tolower(str[j]);
			v.push_back(make_pair(str, tmp)); // 원문, 소문자변환
		}
		sort(v.begin(), v.end(), [](pair<string, string> a, pair<string, string> b) {
			return a.second < b.second;
			});
		cout << v.begin()->first << "\n";
	};
}