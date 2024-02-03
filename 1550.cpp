#include<iostream>
#include<cmath>
using namespace std;

int main() {
	string s;
	int cnt = 0;
	cin >> s;

	for (int i = s.size() - 1, pos=0; i >= 0; i--) {
		int stmp = s[i];
		int tmp = 0;
		if (stmp >= 'A') {
			tmp += 10;
			tmp += stmp - 65;
		}
		else
			tmp += stmp - 48;
		cnt += tmp * pow(16, pos++);
	}
	cout << cnt;
}