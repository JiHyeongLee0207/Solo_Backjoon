#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, m, x, y;
	cin >> n >> m >> x >> y;

	vector<vector<char>> after(n * x + 1, vector<char>(m * y + 1, '@'));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			char a;
			cin >> a;

			int startx = (i-1) * x + 1, starty = (j-1) * y + 1, endx = i * x, endy = j * y;
			for(int k = startx; k <= endx; k++)
				for (int l = starty; l <= endy; l++) {
					after[k][l] = a;
				}
		}
	}
	for (int i = 1; i <= n * x; i++) {
		for (int j = 1; j <= m * y; j++) {
			cout << after[i][j];
		}
		cout << '\n';
	}
}