#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	vector<vector<string>> v;
	v.resize(201);
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string s;
		getline(cin, s);
		v[stoi(s.substr(0, s.find(" ")))].push_back(s);
	}
	for(int i=0;i<v.size();i++)
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j] << "\n";
		}
}