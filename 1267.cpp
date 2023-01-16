#include<iostream>
using namespace std;

int main() {
	int callNumber, callTime;
	int Ymoney = 0, Mmoney = 0;
	cin >> callNumber;
	for (int i = 0; i < callNumber; i++) {
		cin >> callTime;

		Ymoney += (callTime / 30) * 10 + 10;
		Mmoney += (callTime / 60) * 15 + 15;
	}
	if (Ymoney < Mmoney)
		cout << "Y " << Ymoney;
	else if (Ymoney > Mmoney)
		cout << "M " << Mmoney;
	else
		cout << "Y M " << Ymoney;
}