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

	// �Է�
	for (int i = 1; i <= n; i++) {
		string tmp;
		cin >> tmp;
		map.insert(make_pair(tmp, i));
		name.push_back(tmp);
	}

	// ��� Ȯ��
	for (int i = 0; i < m; i++) {
		string tmp;
		cin >> tmp;
		if (!isdigit(tmp[0])) {	// ���ڿ��� ���
			cout << map[tmp] << "\n";
		}
		else					// ������ ���
			cout << name[stoi(tmp) - 1] << "\n";
	}
}