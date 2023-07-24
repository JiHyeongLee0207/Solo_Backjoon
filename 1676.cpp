#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int tmp = i;
        while (tmp % 5 == 0) {
            cnt++;
            tmp /= 5;
        }
    }
    cout << cnt;
}