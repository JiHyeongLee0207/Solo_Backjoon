#include<iostream>
using namespace std;

int main() {
	int arr[51] = { 0 };
	int n;
	cin >> n;
	while (n--) {
		int tmp;
		cin >> tmp;
		(*(arr + tmp))++;
	}
	for (int i = 51; i >= 0; i--) {
		if (*(arr + i) == i) {
			cout << i;
			return 0;
		}
	}
	cout << -1;
}