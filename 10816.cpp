#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n, m;
    vector<int> v;
    cin >> n;
    while (n--) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    cin >> m;
    while (m--) {
        int tmp;
        cin >> tmp;
        auto upper = upper_bound(v.begin(), v.end(), tmp);
        auto lower = lower_bound(v.begin(), v.end(), tmp);
        cout << upper - lower << " ";
    }
}