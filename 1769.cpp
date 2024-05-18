#include<iostream>
#include<string>
using namespace std;

int main() {
	int cnt = 0;
	string s;
	cin >> s;
	while (s.size() > 1) {
		cnt++;

		int sum = 0;
		for(int i=0;i<s.size();i++)
			sum += s[i] - '0';
		s = to_string(sum);
	}
	if(stoi(s)% 3)
		cout << cnt << "\nNO";
	else
		cout << cnt << "\nYES";
}