#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a = 0, b = 0, c = 0;
	int asum = 0, bsum = 0, csum = 0;
	for (int i = 0; i < n; i++) {
		int t1, t2, t3;
		cin >> t1 >> t2 >> t3;
		a += pow(t1, 2);
		b += pow(t2, 2);
		c += pow(t3, 2);
		asum += t1;
		bsum += t2;
		csum += t3;
	}
	int max = 0, pos = 0, sum = 0;
	// 두개가 같고 하나가 다름
	if (a == b && a > c || a==b && b==c && c==a) { // 다 같음
		sum = asum;
	}
	else if (b == c && b > a) {
		sum = bsum;
	}
	else if (c == a && c > b) {
		sum = csum;
	}
	// 모두 다름
	else {
		if (a > max) {
			max = a;
			pos = 1;
			sum = asum;
		}
		if (b > max) {
			max = b;
			pos = 2;
			sum = bsum;
		}
		if (c > max) {
			max = c;
			pos = 3;
			sum = csum;
		}
	}
	cout << pos << " " << sum;
}