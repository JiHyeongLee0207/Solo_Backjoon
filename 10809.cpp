#include<iostream>
#include<string>
using namespace std;

int main() {
	int a[26];
	for (int i = 0; i < 26; i++)
		a[i] = -1;
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (a[s[i] - 97] == -1)
			a[s[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++)
		cout << a[i] << " ";
}