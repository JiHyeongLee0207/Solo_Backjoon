#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		int tmp;
		cin >> tmp;
		
		string s1 = to_string(tmp);
		string s2 = to_string((int)pow(tmp, 2));
		s2 = s2.substr(s2.size() - s1.size(), s2.size());

		if (s1 == s2)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
}