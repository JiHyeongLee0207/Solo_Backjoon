#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;
int main() {
	int n, sum = 0;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
		sum += v[i];
	}
	sort(v.begin(),v.end());

	// 평균
	float mean = (float)sum / (float)n;
	if (fabs(mean - (int)mean) >= 0.5) // 소수점 반올림
		if (mean > 0)
			mean = (int)mean + 1;
		else if(mean < 0)
			mean = (int)mean - 1;
	cout << (int)mean << "\n";

	//중앙값
	int mid = v.size() / 2;
	cout << v[mid] << "\n";

	//최빈값
	int max = 0;
	vector<int> freq;
	for (int i = 0, pos = v.front(); i < n; i++) {
		int cnt = 1;	// 반복횟수
		while (i < v.size() - 1 && v[i] == v[i + 1]) {	// 같은 회수만큼 카운트
			cnt++;
			i++;
		}
		pos = v[i];		// 현재 최빈값
		if (max < cnt) {
			max = cnt;		// 현재 최빈값 빈도수
			freq.clear();			// 같은 빈도수 값 제거
			freq.push_back(pos);	// 새로운 최빈값
		}
		else if (max == cnt)		// 빈도값이 같은 경우
			freq.push_back(pos);
	}
	if (freq.size() > 1) {		// 최빈값이 복수인 경우
		sort(freq.begin(), freq.end());	//정렬
		cout << freq[1] << "\n";	// 두 번째로 작은 값 출력
	}
	else
		cout << freq[0] << "\n";	// 하나의 최빈값인 경우

	//범위
	cout << v.back() - v.front();
}