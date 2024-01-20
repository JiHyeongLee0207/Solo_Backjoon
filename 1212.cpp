#include<iostream>
#include<string>
using namespace std;

int main() {
	bool first = true;
	string s;
	cin >> s;
	if (s == "0") {
		cout << 0;
		return 0;
	}
	for (int i = 0; s[i] != NULL; i++) {
		int tmp = s[i] - '0';
		int arr[3];
		if (tmp - 4 >= 0) {
			tmp -= 4;
			arr[0] = 1;
		}
		else
			arr[0] = 0;
		if (tmp - 2 >= 0) {
			tmp -= 2;
			arr[1] = 1;
		}
		else
			arr[1] = 0;
		if (tmp - 1 >= 0) {
			tmp -= 1;
			arr[2] = 1;
		}
		else
			arr[2] = 0;
		for (int j = 0; j < 3; j++) {
			if (first && arr[j] == 0)
				continue;
			cout << arr[j];
			first = false;
		}
	}
}