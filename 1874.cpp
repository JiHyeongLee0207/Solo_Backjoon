#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
	stack<int> s;
	int n, present = 0;
	vector<char> output;
	bool valid = true;
	
	s.push(present);
	present++;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		while (s.top() < num) {
			s.push(present);
			present++;
			output.push_back('+');
		}
		if (s.top() == num) {
			s.pop();
			output.push_back('-');
		}
		else {	// 불가능한 경우
			valid = false;
		}
	}
	if (!valid) {
		cout << "NO" << '\n';
		return 0;
	}

	for (int i = 0; i < output.size(); i++)
		cout << output[i] << "\n";
}