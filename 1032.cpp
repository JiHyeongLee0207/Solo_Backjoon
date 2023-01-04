#include<iostream>
#include<string>
using namespace std;

int main() {
	int num;
	cin >> num;
	if (num < 1 || num>50)
		return 0;

	string* files = new string[num];
	string answer;
	int len;
	for (int i = 0; i < num; i++) {	// 입력
		cin >> *(files + i);
		if (i == 0) {
			answer = *files;
			len = (*files).length();
		}
		for (int j = 0; j < i; j++) {
			if ((*(files + i)).length() != (*(files + i - j)).length())	// 길이 점검
				return 0;
		}
		if (i > 0)
			for (int k = 0; k < len; k++)
				if ((*(files + i))[k] != (*(files + i - 1))[k])
					answer[k] = '?';
	}
	cout << answer;

	delete[] files;
}