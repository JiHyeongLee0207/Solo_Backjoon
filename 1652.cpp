#include<iostream>
using namespace std;

int main() {
	int n, cnt1 = 0, cnt2 = 0;
	cin >> n;
	char** arr = new char*[n];
	for (int i = 0; i < n; i++) {
		char* tmp = new char[n];
		for(int j = 0; j < n; j++)
			cin >> tmp[j];
		arr[i] = tmp;
	}
	string s1 = "", s2 = "";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			s1.push_back(arr[i][j]);
			s2.push_back(arr[j][i]);
		}
		s1.push_back('X');
		s2.push_back('X');
	}
	for (int i = 0; i < s1.size();) {
		if (s1[i] == '.' && s1[i + 1] == '.' && s1[i + 2] == 'X') {
			cnt1++;
			i += 3;
		}
		else i++;
	}
	for (int i = 0; i < s2.size();) {
		if (s2[i] == '.' && s2[i + 1] == '.' && s2[i + 2] == 'X') {
			cnt2++;
			i += 3;
		}
		else i++;
	}
	cout << cnt1 << " " << cnt2;
}