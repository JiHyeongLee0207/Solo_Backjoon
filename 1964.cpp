#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	long long plus = 4;
	long long sum = 5;
	while (n-- - 1) {
		plus += 3;
		sum += plus;
	}
	cout << sum % 45678;
}