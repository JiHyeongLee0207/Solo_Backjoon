#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());

	int x = stoi(s1);
	int y = stoi(s2);
	int sum = x + y;

	string s3 = to_string(sum);
	reverse(s3.begin(), s3.end());

	cout << stoi(s3);
}