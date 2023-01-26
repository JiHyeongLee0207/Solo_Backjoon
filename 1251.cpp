#include <iostream>
#include <string>
using namespace std;

string s, output;
int main() {
	cin >> s;
	output = "{z}";

	for (int a = 0; a < s.size() - 2; a++) {
		for (int b = a + 1; b < s.size() - 1; b++) {
			string val;
			for (int i = a; i >= 0; i--)
				val += s[i];
			for (int i = b; i > a; i--)
				val += s[i];
			for (int i = s.size() - 1; i > b; i--)
				val += s[i];
			if (output > val) output = val; // val precedes in lexical order then output
		}
	}
	cout << output << endl;
}