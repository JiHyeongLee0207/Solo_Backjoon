#include<iostream>
#include<string>
using namespace std;

int main() {
	int n, cnt = 0;
	string s;
	cin >> n;

	for (int i = 0;; i++) {
		s = to_string(i);
		if (s.find("666") != string::npos)
			cnt++;
		if (cnt == n) {
			cout << s;
			return 0;
		}
	}
}