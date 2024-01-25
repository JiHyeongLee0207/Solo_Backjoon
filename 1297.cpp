#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;

	double tmp = sqrt((a * a) / (b * b + c * c));
	cout << int(b * tmp) << " " << int(c * tmp) << "\n";

	return 0;
}