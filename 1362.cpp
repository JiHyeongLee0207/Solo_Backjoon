#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	int cnt = 1;
	while (1) {
		int o, w;
		cin >> o >> w; // 적정 체중, 실제 체중
		if (o == 0 && w == 0)
			return 0;

		bool alive = true;
		while (1) {
			string select;
			int amount;
			cin >> select >> amount;
			if (select == "#" && amount == 0)
				break;
			else if (select == "F")
				w += amount;
			else if (select == "E")
				w -= amount;
			if (w <= 0)
				alive = false;
		}
		if (!alive) {
			cout << cnt++ << " RIP" << "\n";
			continue;
		}
		else {
			cout << cnt++ << " :-";
			if (w < o * 2 && w > o / 2)
				cout << ")";
			else
				cout << "(";
			cout << "\n";
		}
	}
}