#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	vector<int> v(a + b + c + 3);
	int max = 0;
	for (int i = 1; i < a + 1; i++)
		for (int j = 1; j < b + 1; j++)
			for (int k = 1; k < c + 1; k++)
				v[i + j + k]++;
	for (int i = 3; i < a + b + c + 3; i++)
		if (v[i] > v[max])
			max = i;
	cout << max;
}