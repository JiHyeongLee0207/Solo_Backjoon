#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;
	while (n--) {
		string tmp;
		cin >> tmp;
		for (int i = 0; i < tmp.size(); i++) {
			if ('A' <= tmp[i] && tmp[i] <= 'Z')
				tmp[i] += 32;
		}
		cout << tmp << "\n";
	}
}