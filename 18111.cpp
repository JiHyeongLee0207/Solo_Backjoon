#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cal(vector<int> v1, vector<int> v2) {
    if (v1[0] == v2[0])         // �ҿ� �ð��� ���� ���
        return v1[1] > v2[1];   // ���� ��������
    return v1[0] < v2[0];       // �ҿ� �ð� �ø�����
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    vector<vector<int>> v;
    vector<vector<int>> output;
    int n, m, b;

    // �Է�
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

    // ���
    for (int i = 0; i <= 256; i++) { // ��ǥġ�� ���� Ȯ��
        int goal = i; // ���� ĭ�� ��ǥ��� ��
        int invenB = b;         // ���� ���� ��� ��
        int reqBlock = 0;       // �ʿ��� ��� ��
        int s = 0;              // �ҿ� �ð�
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                // ����� ���� ���
                if (goal > v[j][k]) {
                    reqBlock += goal - v[j][k]; // �ʿ��� ��� ��
                    s += goal - v[j][k]; // 1*(��� ��) �ð� �ҿ�
                }
                // ����� �μ��� ���
                else if (goal < v[j][k]) {
                    invenB += v[j][k] - goal;   // �κ��� �߰��� ��� ��
                    s += 2 * (v[j][k] - goal);  // 2*(��� ��) �ð� �ҿ�
                }
            }
        }
        if (reqBlock > invenB)  // ������ ����� ���ڶ� ���
            continue;               // ��ŵ
        else {  // ������ ���
            output.push_back({ s,goal });
        }
    }
    sort(output.begin(), output.end(), cal);
    cout << output[0][0] << " " << output[0][1];
}