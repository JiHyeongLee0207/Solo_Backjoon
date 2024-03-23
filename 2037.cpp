#include<iostream>
#include<string>
using namespace std;

int main() {
	int p, w;
	cin >> p >> w;

	string s;
	cin.ignore();
	getline(cin, s);

	int cnt = 0;
	int pos = 0;
	for (int i = 0; i < s.size(); i++) {
		int tmp = 0;
		if (s[i] == ' ') {
			pos = 1;
			cnt += p;
		}
		else if (s[i] >= 'A' && s[i] <= 'C') {
			if (pos == 2)
				cnt += w;
			pos = 2;
			tmp = s[i] - 'A' + 1;
		}
		else if (s[i] >= 'D' && s[i] <= 'F') {
			if (pos == 3)
				cnt += w;
			pos = 3;
			tmp = s[i] - 'D' + 1;
		}
		else if (s[i] >= 'G' && s[i] <= 'I') {
			if (pos == 4)
				cnt += w;
			pos = 4;
			tmp = s[i] - 'G' + 1;
		}
		else if (s[i] >= 'J' && s[i] <= 'L') {
			if (pos == 5)
				cnt += w;
			pos = 5;
			tmp = s[i] - 'J' + 1;
		}
		else if (s[i] >= 'M' && s[i] <= 'O') {
			if (pos == 6)
				cnt += w;
			pos = 6;
			tmp = s[i] - 'M' + 1;
		}
		else if (s[i] >= 'P' && s[i] <= 'S') {
			if (pos == 7)
				cnt += w;
			pos = 7;
			tmp = s[i] - 'P' + 1;
		}
		else if (s[i] >= 'T' && s[i] <= 'V') {
			if (pos == 8)
				cnt += w;
			pos = 8;
			tmp = s[i] - 'T' + 1;
		}
		else if (s[i] >= 'W' && s[i] <= 'Z') {
			if (pos == 9)
				cnt += w;
			pos = 9;
			tmp = s[i] - 'W' + 1;
		}
		cnt += tmp * p;
	}
	cout << cnt;
}