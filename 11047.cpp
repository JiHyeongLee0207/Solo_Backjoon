#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

int main() {
	vector<int> v(10);
	vector<int>::iterator p;

	int vnum, money;
	cin >> vnum >> money;

	for (p = v.begin(); p != v.end(); p++)
		cin >> *p;

	int i = vnum - 1;
	int count = 0;
	while (1) {
		while (1) {
			if (v.at(i) <= money)
			{
				money -= v.at(i);
				count++;
			}
			if (v.at(i) > money)
				break;
		}
		i--;
		if (money == 0)
			break;
	}
	cout << count;

	return 0;
}