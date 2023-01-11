#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<string> arr;
	int count = 0;

	string input;
	for (int i = 0; i < 8; i++) {
		cin >> input;
		arr.push_back(input);
	}
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (((i + j) % 2 == 0) && (arr[i][j] == 'F'))
				count++;
	cout << count;
}