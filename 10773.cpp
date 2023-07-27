#include<iostream>
#include<vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    vector<int> v;
    int n, sum = 0;
    cin >> n;
    while (n--) {
        int tmp;
        cin >> tmp;
        if (tmp != 0)
            v.push_back(tmp);
        else
            v.pop_back();
    }
    for (int i = 0; i < v.size(); i++)
        sum += v[i];
    cout << sum;
}