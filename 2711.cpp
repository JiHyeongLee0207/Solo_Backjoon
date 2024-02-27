#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;

	while (n--) {
		int tmp;
		cin >> tmp;

		string s;
		cin >> s;

		s.erase(tmp - 1, 1);
		cout << s << "\n";
	}
}