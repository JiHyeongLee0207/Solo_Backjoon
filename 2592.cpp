#include<iostream>
using namespace std;

int main() {
	int arr[101] = { 0 };
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		int tmp;
		cin >> tmp;
		arr[tmp / 10]++;
		sum += tmp;
	}

	int max = 0, pos = 0;
	for (int i = 1; i <= 100; i++) {
		if (max < arr[i]) {
			max = arr[i];
			pos = i;
		}
	}
	cout << sum / 10 << "\n" << pos * 10;
}