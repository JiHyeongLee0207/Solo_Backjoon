#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;

		pair<string, int> p[8] = {
			make_pair("TTT", 0),
			make_pair("TTH", 0),
			make_pair("THT", 0),
			make_pair("THH", 0),
			make_pair("HTT", 0),
			make_pair("HTH", 0),
			make_pair("HHT", 0),
			make_pair("HHH", 0)
		};

		for (int i = 0; i < s.size() - 2; i++) {
			string str = s.substr(i, 3);
			for (int j = 0; j < 8; j++) {
				if (str == p[j].first) {
					p[j].second++;
					break;
				}
			}
		}
		for(int i=0;i<8;i++)
			cout << p[i].second << " ";
		cout << "\n";
	}
}