#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n, v, cnt = 0;
	vector<int> vec;
	vector<int>::iterator iter;
	cin >> n;
	while (n--) {
		int i;
		cin >> i;
		vec.push_back(i);
	}
	cin >> v;
	for (iter = vec.begin(); iter != vec.end(); iter++)
		if (*iter == v)
			cnt++;
	cout << cnt;
}