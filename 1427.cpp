#include<iostream>
#include<algorithm>

int main() {
	std::string s;
	std::cin >> s;

	sort(s.begin(), s.end(), std::greater<char>());
	std::cout << s;
}