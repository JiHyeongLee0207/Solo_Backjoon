#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	while (1) {
		int arr[9] = { 0 }, total = 0;
		for (int i = 0; i < 9; i++) {
			int tmp;
			cin >> tmp;
			arr[i] = tmp;
			total += tmp;
		}
		sort(arr, arr + 9);
		for (int i = 8; i >= 1; i--) {
			for (int j = i - 1; j >= 0; j--) {
				if (total - arr[i] - arr[j] == 100) {
					for (int k = 0; k < 9; k++) {
						if (k != j && k != i) cout << arr[k] << "\n";
					}
					return 0;
				}
			}
		}
	}
	
}