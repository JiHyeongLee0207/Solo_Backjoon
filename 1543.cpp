#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int cnt = 0;
	while (1) {
		auto it = s1.find(s2);
		if (it != string::npos) {
			s1.erase(0, it + s2.size());
			cnt++;
		}
		else break;
	}
	cout << cnt;
}