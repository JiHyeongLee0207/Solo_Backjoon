#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);

    int a, b, v, cnt = 1, pos = 0;
    cin >> a >> b >> v;

    int cal = a - b;    // �Ϸ翡 �ö󰡴� ��
    v = v - a;           // �������� �ö󰡴� �Ÿ� (cnt=1)
    cnt += v / cal;     // ��ĥ�� �ö� �Ÿ�
    if (v % cal != 0)   //�Ϸ翡 �ö󰡴� ���� ����� ���
        cnt++;
    cout << cnt;
}