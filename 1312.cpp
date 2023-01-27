#include<iostream>
using namespace std;

int main() {
	int a, b, n, result = 0;
	cin >> a >> b >> n;

	// if remainder is 0
	if (a % b == 0) {
		cout << 0;
		return 0;
	}

	// because of overflow, use one by one calculation
	a %= b;
	for (int i = 0; i < n; i++) {
		a *= 10;
		result = (int)(a / b);
		a %= b;
	}
	cout << result;
}