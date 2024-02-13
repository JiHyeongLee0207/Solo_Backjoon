#include<iostream>
#include<cmath>
using namespace std;

int main() {
	
	while (1) {
		string s;
		cin >> s;
		if (s == "#")
			break;

		int sum = 0;
		for (int i = s.size() - 1; i >= 0 ; i--) {
			int tmp = 0;
			switch (s[i]) {
			case '-':
				tmp = 0;
				break;
			case '\\':
				tmp = 1;
				break;
			case'(':
				tmp = 2;
				break;
			case'@':
				tmp = 3;
				break;
			case'?':
				tmp = 4;
				break;
			case'>':
				tmp = 5;
				break;
			case'&':
				tmp = 6;
				break;
			case'%':
				tmp = 7;
				break;
			case'/':
				tmp = -1;
				break;

			}
			sum += tmp * pow(8, s.size() - i - 1);
		}
		cout << sum << "\n";
	}
}