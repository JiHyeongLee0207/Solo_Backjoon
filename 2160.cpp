#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	int row = 5,col = 7;
	int out1 = 0, out2 = 0;
	vector<vector<string>> v;
	for (int i = 0; i < n; i++) {
		vector<string> temp;
		for (int j = 0; j < row; j++) {
			string s;
			cin >> s;
			temp.push_back(s);
		}
		v.push_back(temp);
	}

	int min = 10000;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int cnt = 0;
			for (int k = 0; k < row; k++)
				for (int l = 0; l < col; l++)
					if (v[i][k][l] != v[j][k][l])
						cnt++;
			if (cnt < min) {
				min = cnt;
				out1 = i + 1;
				out2 = j + 1;
			}
		}
	}
	cout << out1 << " " << out2;
}