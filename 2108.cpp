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

	// ���
	float mean = (float)sum / (float)n;
	if (fabs(mean - (int)mean) >= 0.5) // �Ҽ��� �ݿø�
		if (mean > 0)
			mean = (int)mean + 1;
		else if(mean < 0)
			mean = (int)mean - 1;
	cout << (int)mean << "\n";

	//�߾Ӱ�
	int mid = v.size() / 2;
	cout << v[mid] << "\n";

	//�ֺ�
	int max = 0;
	vector<int> freq;
	for (int i = 0, pos = v.front(); i < n; i++) {
		int cnt = 1;	// �ݺ�Ƚ��
		while (i < v.size() - 1 && v[i] == v[i + 1]) {	// ���� ȸ����ŭ ī��Ʈ
			cnt++;
			i++;
		}
		pos = v[i];		// ���� �ֺ�
		if (max < cnt) {
			max = cnt;		// ���� �ֺ� �󵵼�
			freq.clear();			// ���� �󵵼� �� ����
			freq.push_back(pos);	// ���ο� �ֺ�
		}
		else if (max == cnt)		// �󵵰��� ���� ���
			freq.push_back(pos);
	}
	if (freq.size() > 1) {		// �ֺ��� ������ ���
		sort(freq.begin(), freq.end());	//����
		cout << freq[1] << "\n";	// �� ��°�� ���� �� ���
	}
	else
		cout << freq[0] << "\n";	// �ϳ��� �ֺ��� ���

	//����
	cout << v.back() - v.front();
}