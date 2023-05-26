#include<iostream>
using namespace std;

int main() {
	long n, m, tmp, gcd = 1, lcm = 1;
	cin >> n >> m;
	n < m ? tmp = n : tmp = m;
	long n1 = n, m1 = m, tmp1 = tmp;
	for (long i = 2; i <= tmp1;) {
		if (n1 % i == 0 && m1 % i == 0) {
			gcd *= i;
			n1 /= i;
			m1 /= i;
			tmp1 /= i;
		}
		else
			i++;
	}
	cout << gcd << "\n";
	n1 = n, m1 = m;
	n > m ? tmp1 = n : tmp1 = m;
	for (long i = 2; i <= tmp1;) {
		int cnt = 0;
		if (n1 % i == 0) {
			n1 /= i;
			cnt++;
		}
		if (m1 % i == 0) {
			m1 /= i;
			cnt++;
		}
		if (cnt == 0)
			i++;
		else
			lcm *= i;
	}
	cout << lcm;
}