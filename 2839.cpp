#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    
    int n;
    int x, y;   // 현재 3의 개수, 현재 5의 개수
    cin >> n;
    vector<int> v;
    for (x = 0; x <= n / 5; x++) {
        int tmp = n - (5 * x);
        if (tmp % 3 == 0) {
            y = tmp / 3;
            v.push_back(x + y);
        }
    }
    if (v.empty())
        cout << -1;
    else
        cout << v.back();
}