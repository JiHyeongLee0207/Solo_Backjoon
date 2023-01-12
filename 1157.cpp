#include<iostream>
#include<string>
#define SIZE 26
#define lower 65
#define upper 97
using namespace std;

int main() {
	int arr[SIZE] = { 0 };
	int max = 0, cnt = 0;
	char output = 0;
	string input;
	getline(cin, input);

	for (int i = 0; i <= input.size(); i++) {
		if ((int)input[i] - lower > (SIZE - 1)) // upper case 
			arr[(int)input[i] - upper]++;
		else if ((int)input[i] - lower <= (SIZE - 1)) // lower case 
			arr[(int)input[i] - lower]++;
	}

	for (int i = 0; i < SIZE; i++)	// find max frequent
		if ((arr[i] > 0) && (max < arr[i]))
			max = arr[i];

	for (int i = 0; i < SIZE; i++)
		if (arr[i] == max) {
			cnt++;
			if (cnt > 1) {	// two or more max
				output = '?';
				break;
			}
			output = (char)(i + 65);	// one max
		}
	cout << output;
}