#include<iostream>
#include<math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int n, m, output;
	cin >> n >> m;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int cal = 0;
	for(int i=0;i<n-2;i++)
		for(int j=i+1;j<n-1;j++)
			for (int k = j+1; k < n; k++) {
				int temp = arr[i] + arr[j] + arr[k];
				if (temp <= m && abs(temp - m) <= abs(cal - m))
					cal = temp;
			}
	cout << cal;
}