#include<iostream>
#include<random>
using namespace std;

int main() {
	int a, b, c, max;
	int output = 0;
	cin >> a >> b >> c;

	if (a == b && b == c && a == c)
		output = 10000 + (a * 1000);
	else if ((a == b && a != c) || (a == c && a != b))
		output = 1000+(a*100);
	else if (b == c && a != c)
		output = 1000 + (b * 100);
	else {
		(a > b) ? max = a : max = b;
		(c > max) ? max = c : max = max;
		output = max * 100;
	}
	cout << output;
}