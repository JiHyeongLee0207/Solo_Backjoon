#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cal(vector<int> v1, vector<int> v2) {
    if (v1[1] == v2[1])
        return v1[0] < v2[0];
    return v1[1] < v2[1];
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    vector<vector<int>> v;
    int n;
    cin >> n;
    while (n--) {
        int x, y;
        cin >> x >> y;
        v.push_back({ x,y });
    }
    sort(v.begin(), v.end(), cal);
    for (int i = 0; i < v.size(); i++)
        cout << v[i][0] << " " << v[i][1] << "\n";
}