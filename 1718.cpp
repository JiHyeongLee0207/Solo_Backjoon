#include<iostream>
#include<string>
using namespace std;

int main() {
	string line, key;
	getline(cin, line);
	cin >> key;

	int pos = 0;
	for (int i = 0; i < line.size(); i++) {
		if (line[i] != ' ') {
			if (line[i] - key[pos] > 0)
				line[i] = line[i] - key[pos] + 'a' - 1;
			else {
				line[i] = 'z' + (line[i] - key[pos]);
			}
		}
		if (pos == key.size() - 1)
			pos = 0;
		else
			pos++;
	}
	cout << line;
}