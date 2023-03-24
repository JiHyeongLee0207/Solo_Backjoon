#include<iostream>
using namespace std;
class Max {
public:
	int value = 0;
	int num = 0;
};

int main() {
	int arr[9];
	Max a;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (arr[i] > a.value) {
			a.value = arr[i];
			a.num = i + 1;
		}
	}
	cout << a.value << endl << a.num;
}