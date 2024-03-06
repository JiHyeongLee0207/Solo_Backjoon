#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> graph;
int tmp;
void bfs(int pos) {
	
}

int main() {

	vector<int> cnt;
	cnt.push_back(0);
	int n, m, min = 0;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		vector<int> v;
		v.push_back(0);
		graph.push_back(v);
	}

	for (int i = 1; i <= m; i++) {
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		graph[tmp1].push_back(tmp2);
	}

	// 각 노드별로 반복
	for (int i = 1; i < graph.size(); i++) {
		tmp = 0;
		bfs(i);
	}

	cout << min;
}