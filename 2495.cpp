#include<iostream>
#include<string>
using namespace std;
int main() {
	int n = 3;
	while (n--) {
		string s;
		cin >> s;

		int max = 1;
		int pos = 1;
		for (int i = 1; i < s.size(); i++) {
			if (s[i] == s[i - 1])
				pos++;
			else
				pos = 1;
			if (max < pos)
				max = pos;
		}
		cout << max << "\n";
	}
}