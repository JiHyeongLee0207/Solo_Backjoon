#include<iostream>
#include<stack>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    stack<int> s;
    int n;
    cin >> n;
    while (n--) {
        string tmp;
        cin >> tmp;
        if (tmp == "push") {
            int m;
            cin >> m;
            s.push(m);
        }
        if (tmp == "pop") {
            if (!s.empty()) {
                cout << s.top() << "\n";
                s.pop();
            }
            else
                cout << -1 << "\n";
        }
        if (tmp == "top") {
            if (!s.empty())
                cout << s.top() << "\n";
            else
                cout << -1 << "\n";
        }

        if (tmp == "size")
            cout << s.size() << "\n";
        if (tmp == "empty")
            cout << s.empty() << "\n";
    }
}