#include<iostream>
#define SIZE 5
using namespace std;

int main() {
	int input[SIZE], count;

	for (int i = 0; i < SIZE; i++)
		cin >> input[i];

	for (int i = 1;; i++) {
		count = 0;
		for (int j = 0; j < SIZE; j++)
			if (i % input[j] == 0) {
				count++;
				if (count >= 3) {
					cout << i;
					return 0;
				}
			}
	}

}