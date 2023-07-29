#include<iostream>
#include<math.h>
using namespace std;
const long long M = 1234567891;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long n, sum = 0;
    char a;
    cin >> n;

    long long r = 1;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum = (sum + (a - 96) * r) % M;
        r = (r * 31) % M;
    }
    cout << sum;
}