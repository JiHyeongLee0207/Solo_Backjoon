#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;

		string s1 = s.substr(0, 3);
		int s1_val = 0;
		for (int i = s1.size() - 1; i >= 0; i--)
			s1_val += (s1[i] - 'A') * pow(26, s1.size() - i - 1);

		string s2 = s.substr(4, 8);
		int s2_val = stoi(s2);
		if (abs(s1_val - s2_val) <= 100)
			cout << "nice" << "\n";
		else
			cout << "not nice" << "\n";
	}
}