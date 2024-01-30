#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int k = 1; k <= n; k++) {
		int cnt1 = n - k;
		while (cnt1--)
			cout << " ";
		
		int cnt2 = 2 * k - 1;
		while (cnt2--)
			cout << "*";
		cout << "\n";
	}
}