#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		int sum = 0, plus = 1;
		string s;
		cin >> s;

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'O')
				sum += plus++;
			else
				plus = 1;
		}
		cout << sum << endl;
	}
}