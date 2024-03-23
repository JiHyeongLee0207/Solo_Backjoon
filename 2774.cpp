#include<iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;

		int cnt = 0;
		bool del = false;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < s.size(); j++) {
				if (i+'0' == s[j]) {
					del = true;
				}
			}
			if (del) {
				cnt++;
				del = false;
			}
		}
		cout << cnt << "\n";
	}
}