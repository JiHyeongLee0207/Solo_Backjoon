#include<iostream>
#include<string>
using namespace std;

int main() {
	string a, b, x, y;
	cin >> a >> b;

	for (int i = 0; i < a.length(); i++) {
		x.push_back(a[a.length() - i - 1]);
		y.push_back(b[b.length() - i - 1]);
	}
	stoi(x) > stoi(y) ? cout << x : cout << y;
}