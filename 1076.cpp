#include<iostream>
using namespace std;
enum color {
	COLOR_black, 
	COLOR_brown, 
	COLOR_red, 
	COLOR_orange, 
	COLOR_yellow, 
	COLOR_green, 
	COLOR_blue, 
	COLOR_violet, 
	COLOR_grey, 
	COLOR_white};
int main() {
	string input;
	long long output = 0;
	long long value;
	for (int i = 0; i < 3; i++) {
		cin >> input;
		if (input == "black")
			value = COLOR_black;
		else if (input == "brown")
			value = COLOR_brown;
		else if (input == "red")
			value = COLOR_red;
		else if (input == "orange")
			value = COLOR_orange;
		else if (input == "yellow")
			value = COLOR_yellow;
		else if (input == "green")
			value = COLOR_green;
		else if (input == "blue")
			value = COLOR_blue;
		else if (input == "violet")
			value = COLOR_violet;
		else if (input == "grey")
			value = COLOR_grey;
		else if (input == "white")
			value = COLOR_white;
		else
			return 0;
		if (i == 2) {
			for (int j = 0; j < value; j++)
				output *= 10;
			break;
		}
		output = (output * 10) + value;
	}
	cout << output;
}