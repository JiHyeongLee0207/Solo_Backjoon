#include<iostream>
using namespace std;

int main() {
	string s;
	cin >> s;

	int sum = 0;
	bool isprime = true;
	for (int i = 0; i < s.size(); i++) {
		sum += s[i];
		if (s[i] < 'a')
			sum += - 'A' + 27;
		else
			sum += - 'a' + 1;
	}
	// Too small to use eratosthenes sieve
	if(sum!=1)
		for (int i = 2; i < sum; i++) {
			if (sum % i == 0) {
				isprime = false;
				break;
			}
		}
	if (isprime)
		cout << "It is a prime word.";
	else
		cout << "It is not a prime word.";
}