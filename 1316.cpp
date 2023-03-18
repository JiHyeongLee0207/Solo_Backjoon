#include<iostream>
#include<vector>
using namespace std;

int main() {
	string s;
	int n, cnt = 0;

	cin >> n;
	while (n--) {
		bool isGroup = true;
		string check = "";
		cin >> s;
		
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < check.length(); j++) {
				if (s[i] == check[j]) {	// is there same char
					if (s[i] != s[i - 1]) {	// is it continuous
						isGroup = false;
						break;
					}
				}
			}
			check.push_back(s[i]);
		}
		if (isGroup)
			cnt++;
	}
	cout << cnt;
}