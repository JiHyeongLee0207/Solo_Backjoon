#include<iostream>
using namespace std;

int main() {
	while (1) {
		int a;
		cin >> a;
		if (a == 0)
			break;

		int sum = 1, branch, split;
		for (int i = 0; i < 2 * a; i++) {
			if (i % 2 == 0) {
				cin >> branch;
				sum *= branch;
			}
			else {
				cin >> split;
				sum -= split;
			}
		}
		cout << sum << endl;
	}
}