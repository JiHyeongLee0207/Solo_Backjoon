#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int i = 0, cnt = 0;
	getline(cin, s);
	while (s[i] != NULL){ 	//space count
		if ((i != 0) && (i != s.size() - 1) && (s[i] == ' '))	// exclude first and last space
			cnt++;
		i++;
	}
	if (s == " ")	// just one space
		cout << cnt;
	else
		cout << cnt + 1;
}