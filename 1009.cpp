#include<iostream>
#include<vector>
using namespace std;

int main() {
	int forNum;
	cin >> forNum;
	
	int a, b, answer;
	for (int i = 0; i < forNum; i++) {
		cin >> a >> b;

		int check = 1;
		for (int j = 0; j < b; j++) {
			check *= a;
			check %= 10;
		}
		if (check == 0)
			answer = 10;
		else
			answer = check;
		cout << answer << endl;
	}
}