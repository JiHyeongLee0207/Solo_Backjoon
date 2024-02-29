#include<iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int pos = 0, sum = 0;
	for (int i = 1; ; i++) {
		for (int j = 0; j < i; j++) {
			pos++;
			if (pos >= a)
				sum += i;
			if (pos == b) {
				cout << sum;
				return 0;
			}	
		}
	}
}