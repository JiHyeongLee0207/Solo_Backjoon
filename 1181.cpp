#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main() {
	int input;
	cin >> input;
	vector<string>s;
	
	for (int i = 0; i < input; i++) {
		string str;
		cin >> str;
		s.push_back(str);
	}
	sort(s.begin(), s.end(), cmp);

	for (int i = 0; i < s.size(); i++) {
		if (i > 0 && s[i] == s[i - 1])
			continue;
		cout << s[i] << endl;
	}
}