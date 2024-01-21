#include<iostream>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	long long cnt = 0;
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.size(); i++) {
		for (int j = 0; j < s2.size(); j++) {
			cnt += ((int)s1[i] - '0') * ((int)s2[j] - '0');
		}
	}
	cout << cnt;
}