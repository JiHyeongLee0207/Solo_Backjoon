#include<iostream>
using namespace std;

void cal(int* x, char* c) {
	if (*c == 'A')
		*x = 0;
	else if (*c == 'G')
		*x = 1;
	else if (*c == 'C')
		*x = 2;
	else if (*c == 'T')
		*x = 3;
	else
		cout << "Error";
}

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	char arr[4][4] = {
		{'A','C','A','G'},
		{'C','G','T','A'},
		{'A','T','C','G'},
		{'G','A','G','T'}
	};

	while (s.size() != 1) {
		char c1 = s[s.size() - 1];
		char c2 = s[s.size() - 2];

		int a, b;
		cal(&a, &c1);
		cal(&b, &c2);

		s.pop_back();
		s[s.size() - 1] = arr[a][b];
	}
	cout << s;
}