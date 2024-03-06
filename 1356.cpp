#include<iostream>
using namespace std;

int main() {
	string n;
	cin >> n;

	for (int i = 0; i < n.size() - 1; i++) {
		string s1 = n.substr(0, i + 1);
		string s2 = n.substr(i + 1, n.size() - 1);

		int mul1 = 1, mul2 = 1;
		for (int j = 0; j < s1.size(); j++) {
			mul1 *= s1[j] - '0';
		}
		for (int j = 0; j < s2.size(); j++) {
			mul2 *= s2[j] - '0';
		}
		if (mul1 == mul2) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}