#include<iostream>
using namespace std;

int main() {
	bool arr[100] = { false };
	int n, cnt = 0;
	cin >> n;
	while (n--) {
		int tmp;
		cin >> tmp;
		if (!arr[tmp - 1])
			arr[tmp - 1] = true;
		else
			cnt++;
	}
	cout << cnt;
}