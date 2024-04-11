#include<iostream>
using namespace std;

int main() {
	int n, cnt = 1;
	cin >> n;

	string s;
	cin >> s;

	for (int i = 0; i < n;) {
		if (s[i] == 'S') i++;
		else i += 2;
		cnt++;
	}
	if (cnt < n)
		cout << cnt;
	else
		cout << n;
}