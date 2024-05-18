#include<iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long sum = 0, pos = 1;
	while (1) {
		sum += pos;
		if (sum > n) {
			cout << --pos;
			return 0;
		}
		pos++;
	}
}