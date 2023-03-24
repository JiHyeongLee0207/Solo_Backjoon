#include<iostream>
using namespace std;

float crack(float max, float a) {
	return (a / max) * 100;
}

int main() {
	int n, max = 0;
	cin >> n;
	float* arr = new float[n];

	// input grades, get max
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
	}

	// crack grades
	for (int i = 0; i < n; i++)
		arr[i] = crack(max, arr[i]);

	// get average
	float sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];

	// get output
	cout << sum / n;
}