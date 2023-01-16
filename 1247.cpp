#include<iostream>
#include<limits.h>
using namespace std;

int main() {
	int cnt = 3;
	while (cnt--) {
		long long sum = 0, times, input;
		int OVER_FLOW = 0;
		cin >> times;
		for (int i = 0; i < times; i++) {
			cin >> input;
			if ((input > 0) && (sum > 0) && (sum > (LLONG_MAX - input)))
				OVER_FLOW++;
			if ((input < 0) && (sum < 0) && (sum < (LLONG_MIN - input)))
				OVER_FLOW--;
			sum += input;
		}
		if (OVER_FLOW == 0 && sum == 0)
			cout << "0" << endl;
		if (OVER_FLOW > 0 || (OVER_FLOW == 0 && sum > 0))
			cout << "+" << endl;
		if (OVER_FLOW < 0 || (OVER_FLOW == 0 && sum < 0))
			cout << "-" << endl;
	}
}