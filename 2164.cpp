#include<iostream>
#include<deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	deque<int> deq;
	int n;
	cin >> n;
	for (int i = n; i > 0; i--)
		deq.push_front(i);
	while (deq.size() != 1) {
		deq.pop_front();
		deq.push_back(deq.front());
		deq.pop_front();
	}
	cout << deq.front();
}