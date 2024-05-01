#include<iostream>
using namespace std;

int main() {
	string input, output = "";
	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		int cnt = 0;
		bool flag = true;
		while (input[i] == 'X') {
			cnt++;
			i++;
		}

		if (cnt % 4 == 2 || cnt % 2 == 0) {
			flag = false;
			for (int j = 0; j < cnt / 4; j++)
				output += "AAAA";
			if (cnt % 4 == 2)
				output += "BB";
		}
		if (input[i] == '.')
			output += ".";
		if(flag) {
			cout << -1;
			return 0;
		}
	}
	cout << output;
}