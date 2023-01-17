#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int posA[] = { 0,0 }, posB[] = { 0,0 }, disX, disY, dis;
	int a, b;
	cin >> a >> b;
	a--, b--;

	posA[0] = a / 4;
	posB[0] = b / 4;
	posA[1] = a % 4;
	posB[1] = b % 4;
	cout << posA[0] << endl << posB[0] << endl;
	cout << posA[1] << endl << posB[1] << endl;
	
	disX = abs(posA[0] - posB[0]);
	disY = abs(posA[1] - posB[1]);
	dis = disX + disY;
	cout << dis;
}