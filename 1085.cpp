#include<iostream>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h; 
	int xmin = 0, ymin = 0, min = 0;
	(x > w / 2) ? xmin = (w - x) : xmin = x;
	(y > h / 2) ? ymin = (h - y) : ymin = y;
	(xmin > ymin) ? min = ymin : min = xmin;
	cout << min;
}