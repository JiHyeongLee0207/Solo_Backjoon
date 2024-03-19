#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;

	for (int i = s.size() - 1; i >= 1; i--) {
		if (s[i] >= '0' && s[i] < '5') {
			s[i] = '0';
		}
		else {
			s[i] = '0';
			s[i - 1]++;
		}
	}
	if (s[0] == ':') {
		s.erase(s.begin());
		s.insert(0, "10");
	}
	cout << s;
}