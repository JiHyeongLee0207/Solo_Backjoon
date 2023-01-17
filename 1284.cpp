#include<iostream>
using namespace std;

int main() {
	string s;
	while (1) {
		cin >> s;
		if (s == "0")
			break;
		int output = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '0')
				output += 4;
			else if (s[i] == '1')
				output += 2;
			else
				output += 3;
		}
		output += s.size() + 1;
		cout << output << endl;
	}
}