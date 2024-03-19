#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> v;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.insert(v.end() - temp, i + 1);
	}
	for(int i=0;i<n;i++)
		cout << v[i] << " ";
}