#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	// 해당 버튼이 작동하는지 찾기
	vector<char> v = { '0','1','2','3','4','5','6','7','8','9'};
	vector<char>::iterator iter;
	int cnt[3] = { 0 };
	int pos = 100;
	int channel, n;
	cin >> channel >> n;

	while (n--) {
		char tmp;
		cin >> tmp;
		v.erase(find(v.begin(), v.end(), tmp));
	}

	// 1. 위아래 버튼 탐색.
	cnt[0] = 0;
	cnt[0] += abs(channel - pos);
	if (v.size() == 0) { // 모든 버튼이 작동하지 않는 경우
		cout << cnt[0];
		return 0;
	}

	// 2. 같거나 작은 수
	string s2;
	bool s2find;
	for (int i = channel; i >= 0; i--) {
		s2 = to_string(i);
		s2find = true;
		for (int j = 0; j < s2.size(); j++) {
			iter = find(v.begin(), v.end(), s2[j]);
			if (iter == v.end()) {
				s2find = false;
				break;
			}
		}
		if (s2find)
			break;
	}
	if (s2 == "" || s2find  == false) {
		s2 = "1000000";
	}
	cnt[1] += s2.size();
	cnt[1] += abs(stoi(s2) - channel);

	// 3. 보다 큰 수
	string s3;
	bool s3find;
	for (int i = channel + 1; i <= 999999; i++) {
		s3 = to_string(i);
		s3find = true;
		for (int j = 0; j < s3.size(); j++) {
			iter = find(v.begin(), v.end(), s3[j]);
			if (iter == v.end()) {
				s3find = false;
				break;
			}
		}
		if (s3find)
			break;
	}
	if (s3 == "" && s2find == false) {
		s3 = "1000000";
	}
	cnt[2] += s3.size();
	cnt[2] += abs(stoi(s3) - channel);

	int min = 1000000;
	for (int i = 0; i < 3; i++) {
		if (min > cnt[i])
			min = cnt[i];
	}
	
	cout << min;
}