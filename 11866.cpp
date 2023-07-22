#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    vector<int> v;
    deque<int> d;
    int n, k, cnt = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        d.push_back(i);
    while (!d.empty()) {
        if ((++cnt) == k) {
            v.push_back(d.front());
            d.pop_front();
            cnt = 0;
        }
        else {
            d.push_back(d.front());
            d.pop_front();
        }
    }
    cout << "<";
    for (int i = 0; i < v.size() - 1; i++)
        cout << v[i] << ", ";
    cout << v.back() << ">";
}