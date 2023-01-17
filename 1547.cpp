#include<iostream>
using namespace std;
inline void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int t; const int SIZE = 3;
	int a, b, cup[SIZE] = { 1,-1,-1 };
	bool error = 0;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (a > 3 || b > 3)
			error = 1;
		else if (cup[a - 1] == 1 || cup[b - 1] == 1)
			swap(cup[a-1], cup[b-1]);
	}
	if (error == 1) {
		cout << -1;
		return 0;
	}
	else
		for (int i = 0; i < SIZE; i++)
			if (cup[i] == 1)
				cout << i + 1;
}