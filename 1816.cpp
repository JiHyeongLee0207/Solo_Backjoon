#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		bool s = true;
		unsigned long long tmp;
		cin >> tmp;
		for (int i = 2; i <= 1000000; i++) {
			if (tmp % i == 0) {
				cout << "NO" << "\n";
				s = false;
				break;
			}
		}
		if (s)
			cout << "YES" << "\n";
	}
}