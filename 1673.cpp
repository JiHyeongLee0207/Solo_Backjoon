#pragma warning(disable: 4996)
#include <iostream>
using namespace std;
int main() {
    int n, k;
    while (scanf("%d %d", &n, &k) != EOF) {
        int cnt = n;
        while (n >= k) {
            cnt += n / k;
            n = n / k + n % k;
        }
        cout << cnt << "\n";
    }
}