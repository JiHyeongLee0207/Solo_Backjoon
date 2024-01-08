#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int h, w, n;
		int posh, posw = 1;
		cin >> h >> w >> n;
		
		posh = (n % h != 0) ? n % h : h;
		posw += (n - 1) / h;

		if (posw < 10)
			cout << posh << "0" << posw << "\n";
		else
			cout << posh << posw << "\n";
	}

	return 0;
}