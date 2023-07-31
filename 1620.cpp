#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	map<string, int> map;
	vector<string> name;
	int n, m;
	cin >> n >> m;

	// 입력
	for (int i = 1; i <= n; i++) {
		string tmp;
		cin >> tmp;
		map.insert(make_pair(tmp, i));
		name.push_back(tmp);
	}

	// 출력 확인
	for (int i = 0; i < m; i++) {
		string tmp;
		cin >> tmp;
		if (!isdigit(tmp[0])) {	// 문자열인 경우
			cout << map[tmp] << "\n";
		}
		else					// 숫자인 경우
			cout << name[stoi(tmp) - 1] << "\n";
	}
}