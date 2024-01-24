#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s1, s2;
	cin >> s1 >> s2;
	int sub = s1.size() - s2.size();
	sub = abs(sub);
	s1.insert(0, "0");
	s2.insert(0, "0");
	if(s1.size() < s2.size())
		for (int i = 0; i < sub; i++)
			s1.insert(0, "0");
	else
		for (int i = 0; i < sub; i++)
			s2.insert(0, "0");

	int c = 0;
	vector<int> v;
	for (int i = s1.size() - 1; i >= 0; i--) {
		int tmp1 = s1[i] - '0';
		int tmp2 = s2[i] - '0';
		int sum = tmp1 + tmp2 + c;

		if (sum <= 1) {
			v.push_back(sum);
			c = 0;
			continue;
		}
		else if (sum == 2)
			v.push_back(0);
		else if (sum == 3)
			v.push_back(1);
		c = 1;
	}

	bool isOne = false;
	for (int i = v.size() - 1; i >= 0; i--) {
		if (v[i] == 1)
			isOne = true;
		if(isOne)
			cout << v[i];
	}
	if (!isOne)
		cout << 0;
}