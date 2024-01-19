#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = -n + 1;
	while (n--) {
		int i;
		cin >> i;
		cnt += i;
	}
	if (cnt <= 0)
		cnt = 0;
	cout << cnt;
}