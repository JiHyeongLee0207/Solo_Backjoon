#include<iostream>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        vector<vector<int>> apt;
        int k, n;
        cin >> k >> n;

        int floor = 0;
        do {
            if (floor != 0) {
                vector<int> v;
                v.push_back(1);
                for (int i = 1; i < n; i++) {
                    v.push_back(v[i-1] + apt[floor - 1][i]);
                }
                apt.push_back(v);
            }
            else {
                vector<int> v;
                for (int i = 1; i <= n; i++)
                    v.push_back(i);
                apt.push_back(v);
            }
            floor++;
        } while (floor <= k);
        cout << apt[k][n - 1] << "\n";
    }
}