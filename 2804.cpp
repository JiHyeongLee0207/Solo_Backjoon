#include<iostream>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	int posa = 0, posb = 0;
	bool flag = false;
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			if(a[i]==b[j]){
				posa = i;
				posb = j;
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}
	for (int i = 0; i < b.size(); i++) {
		if (i == posb) {
			cout << a << "\n";
		}
		else {
			for (int j = 0; j < a.size(); j++) {
				if(j==posa)
					cout << b[i];
				else
					cout << ".";
			}
			cout << "\n";
		}
	}
}