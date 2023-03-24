#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<string> v;
	int n;
	cin >> n;
	while(n--){
		int r;
		string s, tmp;
		cin >> r >> s;

		for (int i = 0; i < s.length(); i++)
			for (int j = 0; j < r; j++)
				tmp += s[i];
		v.push_back(tmp);
	}
}