#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int* a = new int[10001] {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a[tmp]++;
    }
    for (int i = 0; i < 10001; i++)
        while (a[i]--)
            cout << i << "\n";
    delete[] a;
}