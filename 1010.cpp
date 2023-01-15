#include<iostream>
using namespace std;

int main() {
	int input;
	cin >> input;
	for (int i = 0; i < input; i++) {
		int n, m;
		cin >> n >> m;
		
		long long output = 1;
		int sub = 1;
		for (int j = m; j > m - n; j--) {
			output *= j;	// = m!
			output /= sub++;	// = n!
		}
		cout << output << endl;
	}
}