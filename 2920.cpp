#include<iostream>
using namespace std;

int main() {
	string s;
	int arr[8], cnt = 0;
	bool ascending;
	for (int i = 0; i < 8; i++)
		cin >> arr[i];

	arr[1] > arr[0] ? ascending = true : ascending = false;
	for (int i = 0; i < 7; i++) {
		if (arr[i] < arr[i + 1])
			cnt++;
		if (arr[i] > arr[i + 1])
			cnt--;
	}
	if (ascending == true && cnt == 7)
		cout << "ascending";
	else if (ascending == false && cnt == -7)
		cout << "descending";
	else
		cout << "mixed";
}
