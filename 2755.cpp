#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int n;
	double h = 0, sum = 0;
	cin >> n;
	pair<string, double> p[] = {
		make_pair("A+",4.3),
		make_pair("A0",4.0),
		make_pair("A-",3.7),
		make_pair("B+",3.3),
		make_pair("B0",3.0),
		make_pair("B-",2.7),
		make_pair("C+",2.3),
		make_pair("C0",2.0),
		make_pair("C-",1.7),
		make_pair("D+",1.3),
		make_pair("D0",1.0),
		make_pair("D-",0.7),
		make_pair("F",0.0)
	};

	for (int i = 0; i < n; i++) {
		string name, grade;
		int score;
		cin >> name >> score >> grade;

		h += score;
		for (int j = 0; j < sizeof(p) / sizeof(p[0]); j++) {
			if (grade == p[j].first) {
				sum += score * p[j].second;
				break;
			}
		}
	}
	cout << fixed << setprecision(2) << round(sum / h * 100) / 100;
}