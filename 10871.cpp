#include<iostream>
using namespace std;

int main() {
	int n, a;
	cin >> n >> a;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] < a)
			cout << arr[i] << " ";
	}
}