#include<iostream>
#include<vector>
using namespace std;

int main() {
	int a;
	int answer;
	cin >> a;
	if ((a < 1) || (50 < a))	// 크기 체크
		return 0;

	vector<int> list;	// 약수
	int list_max; // 약수 중 가장 큰 수
	int list_min;
	for (int i = 0; i < a; i++) {
		int temp;
		cin >> temp;
		if ((temp > 1000000) || (temp < 2))	// 크기 체크
			return 0;
		for (int j = 0; j < i; j++)	// 중복 체크
			if (temp == list[j])
				return 0;
		list.push_back(temp);

		if ((i == 0) || (temp > list_max))
			list_max = temp;
		if ((i == 0) || (temp < list_min))
			list_min = temp;
	}
	answer = list_max * list_min;
	cout << answer;
}