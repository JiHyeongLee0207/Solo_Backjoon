#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		int tmp;
		cin >> tmp;
		if (abs(100 - sum) >= abs(100 - (sum + tmp)))
			sum += tmp;
		else break;
	}
	cout << sum;
}