#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cal(vector<int> v1, vector<int> v2) {
    if (v1[0] == v2[0])         // 소요 시간이 같은 경우
        return v1[1] > v2[1];   // 높이 내림차순
    return v1[0] < v2[0];       // 소요 시간 올림차순
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    vector<vector<int>> v;
    vector<vector<int>> output;
    int n, m, b;

    // 입력
    cin >> n >> m >> b;
    for (int i = 0; i < n; i++) {
        vector<int> vtmp;
        for (int j = 0; j < m; j++) {
            int tmp;
            cin >> tmp;
            vtmp.push_back(tmp);
        }
        v.push_back(vtmp);
    }

    // 계산
    for (int i = 0; i <= 256; i++) { // 목표치들 전부 확인
        int goal = i; // 현재 칸당 목표블록 수
        int invenB = b;         // 현재 가진 블록 수
        int reqBlock = 0;       // 필요한 블록 수
        int s = 0;              // 소요 시간
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                // 블록을 놓는 경우
                if (goal > v[j][k]) {
                    reqBlock += goal - v[j][k]; // 필요한 블록 수
                    s += goal - v[j][k]; // 1*(블록 수) 시간 소요
                }
                // 블록을 부수는 경우
                else if (goal < v[j][k]) {
                    invenB += v[j][k] - goal;   // 인벤에 추가된 블록 수
                    s += 2 * (v[j][k] - goal);  // 2*(블록 수) 시간 소요
                }
            }
        }
        if (reqBlock > invenB)  // 총합의 블록이 모자랄 경우
            continue;               // 스킵
        else {  // 가능한 경우
            output.push_back({ s,goal });
        }
    }
    sort(output.begin(), output.end(), cal);
    cout << output[0][0] << " " << output[0][1];
}