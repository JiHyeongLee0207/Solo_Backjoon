#include<iostream>
#include<deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin >> n;
	while (n--) {
		deque<int> d;
		int arr[10] = { 0 };
		int len, pos, cnt = 1;
		cin >> len >> pos;
		while (len--) {
			int tmp;
			cin >> tmp;
			arr[tmp]++;
			d.push_back(tmp);
		}
		while (1) {
			bool check = false;
			for (int i = d.front() + 1; i <= 9; i++)
				if (arr[i] > 0) { 
					check = true;
					break;
				}
			if (check) {
				int tmp = d.front();
				d.pop_front();
				d.push_back(tmp);
				if (pos == 0)
					pos = d.size() - 1;
				else
					pos--;
			}
			else {
				if (pos == 0)
					break;
				else {
					pos--;
					arr[d.front()]--;
					d.pop_front();
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}