#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		bool flag = false;
		for (int i = s.size() - 1; i >= 1; i--) {
			if (s[i] >= '5')
				flag = true;
			if (flag) {
				s[i - 1]++;
				flag = false;
			}
			s[i] = '0';
		}
		if (s[0] > '9') {
			s[0] = '0';
			s.insert(s.begin(), '1');
		}
		cout << s << "\n";
	}
}