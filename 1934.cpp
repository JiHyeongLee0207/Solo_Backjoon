#include<iostream>
#include<vector>
using namespace std;

// 유클리드 호제법도 사용 가능
int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		int size = n > m ? n : m;
		int tmp = 1;
		if (n == 1 || m == 1)
			cout << n * m << "\n";
		else if (n % m == 0)
			cout << n << "\n";
		else if (m % n == 0)
			cout << m << "\n";
		else {
			for (int i = 2; i <= size;) {
				if (n % i == 0 && m % i == 0) {
					tmp *= i;
					n /= i;
					m /= i;
					continue;
				}
				else {
					if (n % i == 0) {
						n /= i;
						tmp *= i;
					}
					else if (m % i == 0) {
						m /= i;
						tmp *= i;
					}
					else
						i++;
				}
			}
			cout << tmp << "\n";
		}
	}
}