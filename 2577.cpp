#include<iostream>
#include<string>
using namespace std;

int main() {
	int a, b, c, mul = 1;
	string s;
	int num[10] = { 0 };

	cin >> a >> b >> c;
	mul = a * b * c;

	s = to_string(mul);
	for (int i = 0; i < s.length(); i++) {
		num[s[i] - 48]++;
	}
	for (int i = 0; i < 10; i++)
		cout << num[i] << endl;
}