#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a[3];
	while (1) {
		for (int i = 0; i < 3; i++)
			cin >> a[i];
		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
			break;
		sort(a, a + 3);
		int temp = pow(a[0], 2) + pow(a[1], 2);
		if (a[0] + a[1] > a[2] && temp == pow(a[2], 2))
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}