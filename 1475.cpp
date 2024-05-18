#include<iostream>
using namespace std;

int main() {
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
		arr[i] = 0;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
		arr[s[i] - '0']++;
	arr[6] = (arr[6] + arr[9] + 1) / 2;

	int max = 0;
	for (int i = 0; i <= 8; i++)
		if (arr[i] > max)
			max = arr[i];
	cout << max;
}