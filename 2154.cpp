#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		s.append(to_string(i));
	cout << s.find(to_string(n)) + 1;
}