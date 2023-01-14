#include<iostream>
#include<string>
using namespace std;

int main() {
	int input;
	cin >> input;

	//initialize
	bool none = 1;
	string* s = new string[input];
	int a[26] = { 0 };

	//func
	for (int i = 0; i < input; i++) {
		cin >> s[i];
		if (a[(int)(s[i][0]) - 97] == 0)
			a[(int)(s[i][0]) - 97] = 1;
		else
			a[(int)(s[i][0]) - 97]++;
	}

	int least = 5;
	for (int i = 0; i < 26; i++) {
		if (a[i] >= least) {
			none = 0;
			cout << (char)(i + 97);
		}
	}
	if (none == 1)
		cout << "PREDAJA";
	delete[] s;
}