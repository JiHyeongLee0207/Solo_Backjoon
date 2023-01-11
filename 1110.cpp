#include<iostream>
using namespace std;

int main() {
	int input, cycle = 0, count = 0;
	cin >> input;
	if ((input < 0) || (input > 100))	// range check
		return 0;
	cycle = input;
	do{
		count++;
		cycle = ((cycle % 10) * 10) + (((cycle / 10) + (cycle % 10)) % 10);
	} while (input != cycle);
	cout << count;
}