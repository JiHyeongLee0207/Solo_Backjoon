#include<iostream>
#include<string>
using namespace std;

int main() {
	string s, check = "aeiouAEIOU";
	while (1) {
		int cnt = 0;
		getline(cin, s);
		if (s == "#")
			break;
		for (int i = 0; i < s.size(); i++)
			for (int j = 0; j < 10; j++)
				if (check[j] == s[i])
					cnt++;
		cout << cnt << endl;
	}
}