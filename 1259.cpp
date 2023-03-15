#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<string> v;
	string s;
	while (1) {
		bool pal = true;
		cin >> s;

		if (s == "0") break;
		else
			for (int i = 0; i < s.length() / 2; i++)
				if (s[i] != s[s.length() - (i + 1)])
					pal = false;

		if (pal == true)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;
}