#include<iostream>
#include<string>
using namespace std;

int main() {
	int n, m, min = 64, cnt;
	char togle;
	cin >> n >> m;

	string* chess = new string[n];
	for (int i = 0; i < n; i++)
		cin >> chess[i];

	int pointx = 0, pointy = 0;
	for (int pointx = 0; pointx <= n - 8; pointx++) {
		for (int pointy = 0; pointy <= m - 8; pointy++) {
			//first is W
			cnt = 0;
			for (int i = pointx; i < pointx + 8; i++) {
				if (i % 2 == 0)
					togle = 'W';
				else
					togle = 'B';
				for (int j = pointy; j < pointy + 8; j++) {
					if (chess[i][j] != togle)
						cnt++;
					if (togle == 'W')
						togle = 'B';
					else
						togle = 'W';
				}
			}
			if (cnt < min)
				min = cnt;

			//first is B
			cnt = 0;
			for (int i = pointx; i < pointx + 8; i++) {
				if (i % 2 == 0)
					togle = 'B';
				else
					togle = 'W';
				for (int j = pointy; j < pointy + 8; j++) {
					if (chess[i][j] != togle)
						cnt++;
					if (togle == 'B')
						togle = 'W';
					else
						togle = 'B';
				}
			}
			if (cnt < min)
				min = cnt;
		}
	}
	cout << min;
}