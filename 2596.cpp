#include<iostream>
using namespace std;

int main() {
	int n, size = 8;
	cin >> n;
	pair<string, char> arr[8] = {
		make_pair("000000",'A'),
		make_pair("001111",'B'),
		make_pair("010011",'C'),
		make_pair("011100",'D'),
		make_pair("100110",'E'),
		make_pair("101001",'F'),
		make_pair("110101",'G'),
		make_pair("111010",'H')
	};

	string s, output;
	cin >> s;
	for (int i = 0; i < n; i++) {
		string tmp = s.substr(i * 6, 6);
		bool find = false;
		for (int j = 0; j < 8; j++) {
			int wrong = 0; // 다른 개수
			for (int k = 0; k < 6; k++) { // 한글자씩 비교
				if (tmp[k] != arr[j].first[k])
					wrong++;
			}
			if (wrong <= 1) { // 1개 이하로 다르면 찾음
				find = true;
				output.push_back(arr[j].second);
				break;
			}
		}
		if (find == false) {
			cout << i + 1;
			return 0;
		}
	}
	cout << output;
}