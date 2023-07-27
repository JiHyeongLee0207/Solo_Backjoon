#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);

    int a, b, v, cnt = 1, pos = 0;
    cin >> a >> b >> v;

    int cal = a - b;    // 하루에 올라가는 양
    v = v - a;           // 마지막에 올라가는 거리 (cnt=1)
    cnt += v / cal;     // 며칠간 올라간 거리
    if (v % cal != 0)   //하루에 올라가는 양의 배수인 경우
        cnt++;
    cout << cnt;
}