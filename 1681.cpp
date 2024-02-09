#include <iostream>
#include<string>
using namespace std;
int main() {
    int n, l;
    cin >> n >> l;

    int tmp = 0, cnt = 0;
    char c = l + 48;
    while (cnt < n) {
        tmp++;
        string s = to_string(tmp);
        if (s.find(c) == string::npos)
            cnt++;
    }
    cout << tmp;
}