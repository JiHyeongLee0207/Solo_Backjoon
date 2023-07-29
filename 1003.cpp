#include<iostream>
#include<vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int>> v;
        v.clear();
        v.push_back({ 1,0 });
        v.push_back({ 0,1 });
        int n;
        cin >> n;
        if (n == 0)
            cout << v[0][0] << " " << v[0][1] << "\n";
        else if (n == 1)
            cout << v[1][0] << " " << v[1][1] << "\n";
        else {
            for (int i = 2; i <= n; i++) {
                int x = v[i - 2][0] + v[i - 1][0];
                int y = v[i - 2][1] + v[i - 1][1];
                v.push_back({ x,y });
            }
            cout << v[n][0] << " " << v[n][1] << "\n";
        }
    }
}