#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	long long  left=0, right = 1;
	for (int i = 0; i < n - 1; i++) {
		long long  tmp = left + right;
		left = right;
		right = tmp;
	}
	if (n == 0)
		right = 0;
	cout << right;
}