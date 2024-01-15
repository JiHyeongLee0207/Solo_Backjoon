#include<iostream>
using namespace std;

int main() {
	int n = 5;
	int l, p;
	cin >> l >> p;

	int sum = l * p;
	while (n--) {
		int i;
		cin >> i;
		cout << i - sum << " ";
	}
}