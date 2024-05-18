#include<iostream>
using namespace std;

int main() {
	int limit[3] = { 15, 28, 19 };
	int year[3] = { 1, 1, 1 };
	int E, S, M;
	cin>> E >> S >> M;

	int cnt = 1;
	while (1){
		if (E == year[0] && S == year[1] && M == year[2]) {
			cout << cnt;
			break;
		}
		year[0]++; year[1]++; year[2]++;
		if (year[0] > limit[0]) year[0] = 1;
		if (year[1] > limit[1]) year[1] = 1;
		if (year[2] > limit[2]) year[2] = 1;
		cnt++;
	}
}