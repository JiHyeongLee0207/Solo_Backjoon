#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

inline double longest(double a, double b) {
	if (a > b) return a;
	else return b;
}
inline double shortest(double a, double b) {
	if (a > b) return b;
	else return a;
}

int main() {
	long double Ax, Ay, Bx, By, Cx, Cy;
	cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

	// If the three points are parallel
	long double pointx = -Ax, pointy = -Ay;
	long double checkBx = Bx + pointx, checkBy = By + pointy;
	long double checkCx = Cx + pointx, checkCy = Cy + pointy;
	if (Ax == Bx && Ax == Cx || Ay == By && Ay == Cy) { cout << -1; return 0; }
	if (checkBx / checkCx == checkBy / checkCy) { cout << -1; return 0; }

	// Calculation
	long double AB = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));
	long double BC = sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2));
	long double AC = sqrt(pow(Cx - Ax, 2) + pow(Cy - Ay, 2));

	long double max = longest(AB, BC);
	max = longest(max, AC);
	long double min = shortest(AB, BC);
	min = shortest(min, AC);
	long double middle = 0;
	if (AB != max && AB != min) middle = AB;
	if (BC != max && BC != min) middle = BC;
	if (AC != max && AC != min) middle = AC;

	long double maxlength = (max * 2) + (middle * 2);
	long double minlength = (min * 2) + (middle * 2);

	cout.precision(17);
	cout << (double)(maxlength - minlength);
}