#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, pos1 = 0, pos2 = 0;
	cin >> n;
	for(int i=0;i<n;i++) {
		string tmp;
		cin >> tmp;
		if(tmp=="KBS1") pos1 = i;
		if(tmp=="KBS2") pos2 = i;
	}
	for (int i = 0; i < pos1; i++) cout << 1;
	for (int i = 0; i < pos1; i++) cout << 4;
	if (pos1 > pos2) pos2++;
	for (int i = 0; i < pos2; i++) cout << 1;
	for (int i = 0; i < pos2 - 1; i++) cout << 4;
}