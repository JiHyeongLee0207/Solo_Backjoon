#include<iostream>
#include<vector>
using namespace std;

vector<bool> visited(2501, false);

void dfs(int x, vector<vector<int>>& Graph) {
	visited[x] = true;
	for (int i = 0; i < Graph[x].size(); i++) {
		int y = Graph[x][i];
		if (!visited[y])
			dfs(y, Graph);
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		// Initialization
		int m, n, k;
		cin >> m >> n >> k;

		vector<vector<int>> Graph(n * m + 1);
		vector<vector<int>> v(n, vector<int>(m, 0));

		// 1 pos input
		while (k--) {
			int x, y;
			cin >> x >> y;
			v[y][x] = 1;
		}

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (v[i][j] == 1) {
					int node = (m * i) + j;
					int up = node - m;
					int down = node + m;
					int left = node - 1;
					int right = node + 1;

					if (i - 1 >= 0 && v[i - 1][j] == 1)
						Graph[node].push_back(up);
					if (i + 1 <= n - 1 && v[i + 1][j] == 1)
						Graph[node].push_back(down);						
					if (j - 1 >= 0 && v[i][j - 1] == 1)
						Graph[node].push_back(left);
					if (j + 1 <= m - 1 && v[i][j + 1] == 1)
						Graph[node].push_back(right);
				}

		int cnt = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (v[i][j] == 1) {
					int start = (m * i) + j;
					if (!visited[start]) {
						cnt++;
						dfs(start, Graph);
					}
				}

		cout << cnt << "\n";
		visited.assign(2501, false);
	}
}