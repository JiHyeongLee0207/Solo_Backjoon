#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;

	int pos;
	bool g;
	for (pos = n; pos >= 4; pos--) {
		string tmp = to_string(pos);
		g = true;
		for (int j = 0; j < tmp.size(); j++) {
			if (tmp[j] != '4' && tmp[j] != '7')
				g = false;
		}
		if (g == true)
			break;
	}
	cout << pos;
}