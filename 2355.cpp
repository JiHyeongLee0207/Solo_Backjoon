#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL);
    long long a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    cout << (a + b) * (b - a + 1) / 2;
}