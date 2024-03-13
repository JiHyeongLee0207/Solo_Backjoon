#include<iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int sum = m;
	for (int i = 1; i < n; i++) {
		if (i == 2) sum += 28;
		else if (i == 4 || i == 6 || i == 9 || i == 11) sum += 30;
		else sum += 31;
	}
	sum %= 7;
	if (sum == 1)cout << "MON";
	else if (sum == 2)cout << "TUE";
	else if (sum == 3)cout << "WED";
	else if (sum == 4)cout << "THU";
	else if (sum == 5)cout << "FRI";
	else if (sum == 6)cout << "SAT";
	else if (sum == 0)cout << "SUN";
}