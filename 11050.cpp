#include<iostream>
#include<math.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n, k, N = 1, K = 1, R = 1;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        N *= i;
    for (int i = 1; i <= k; i++)
        K *= i;
    for (int i = 1; i <= n - k; i++)
        R *= i;
    cout << N / (K * R);
}