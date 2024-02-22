#include<iostream>
#include<string>
using namespace std;
int main() {
	char c;
	string s;
	while (1) {
		cin >> c;
		if (c == '#')
			break;
		getline(cin, s);

		int cnt = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == c || s[i] == toupper(c))
				cnt++;
		}

		cout << c << " " << cnt << "\n";
	}
}