#include<iostream>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    vector<int> v;
    int n, grade = 0;
    cin >> n;
    // 0명이면 답은 0
    if (n == 0) {
        cout << grade;
        return 0;
    }

    // 값 입력 후 정렬
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    // 30% 절사값
    float per = (float)n * 15 / 100;
    per = round(per);

    // 절사
    v.erase(v.begin(), v.begin() + per);
    v.erase(v.end() - per, v.end());

    float sum = 0;
    for (int i = 0; i < v.size(); i++)
        sum += v[i];
    sum /= v.size();
    grade = round(sum);
    cout << grade;
}