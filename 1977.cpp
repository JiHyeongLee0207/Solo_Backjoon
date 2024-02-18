#include<iostream>
#include<cmath>
using namespace std;

int main() {
	long long n, m, min = -1, sum = 0, pos = 1;
	cin >> n >> m;

	if(n!=1)
		pos = sqrt(n) + 1;
	if (pos * pos <= m) {
		min = pos * pos;
		sum += pos * pos;
		pos++;
	}
	while (pos * pos <= m) {
		sum += pos * pos;
		pos++;
	}
	if (min != -1)
		cout << sum << "\n" << min;
	else
		cout << min;
}