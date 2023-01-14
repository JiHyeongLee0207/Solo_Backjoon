#include<iostream>
using namespace std;

int main() {
	double input;
	cin >> input;
	
	int cnt = 1, i = 1;
	double a = 1, b = 1;
		while (input != cnt) {
			i++;
			if (((i + 1) % 2) != 0) { // a+b is odd number
				a = 1, b = i;
				while (b > 0) {
					if (++cnt == input)
						break;
					a++;
					b--;
				}
			}
			else { // a+b is even number
				a = i, b = 1;
				while (a > 0) {
					if (++cnt == input)
						break;
					b++;
					a--;
				}
			}
		}
		cout << a << "/" << b;
}