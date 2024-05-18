#include<iostream>
using namespace std;

int main() {
	string s;
	cin >> s;

	int cnt[2] = { 0, };
	bool change = s[0] - '0', one = true;
	cnt[change]++;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] - '0' == !change) {
			one = false;
			change = !change;
			cnt[change]++;
		}
	}
	if (one)
		cout << 0;
	else
		cout << min(cnt[0], cnt[1]);
}