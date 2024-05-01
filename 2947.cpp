#include<iostream>
using namespace std;

int main() {
	int arr[5];
	for (int i = 0; i < 5; i++)
		cin >> arr[i];

	bool flag = true;
	while (flag) {
		for (int i = 0; i < 4; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				for (int j = 0; j < 5; j++)
					cout << arr[j] << " ";
				cout << "\n";
			}
		}
		flag = false;
		for (int i = 0; i < 5; i++) {
			if (arr[i] != i + 1) {
				flag = true;
				break;
			}
		}
	}
}
	