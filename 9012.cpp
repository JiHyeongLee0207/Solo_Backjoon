#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		while (s.find("()") != string::npos)
			s.replace(s.find("()"), 2, "");
		if (s.empty())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}