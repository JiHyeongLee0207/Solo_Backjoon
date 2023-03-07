#include<iostream>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;

	for (; k > 0; k--)
		(n / 2 >= m) ? n -= 1 : m -= 1;
	int output;
	(n / 2 > m) ? output = m : output = n / 2;
	cout << output;
}