#include<iostream>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    queue<int> q;
    int n;
    cin >> n;
    while (n--) {
        string tmp;
        cin >> tmp;
        if (tmp == "push") {
            int x;
            cin >> x;
            q.push(x);
        }
        if (tmp == "pop") {
            if (!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            }
            else
                cout << -1 << "\n";
        }
        if (tmp == "size")
            cout << q.size() << "\n";
        if (tmp == "empty")
            cout << q.empty() << "\n";
        if (tmp == "front") {
            if (!q.empty())
                cout << q.front() << "\n";
            else
                cout << -1 << "\n";
        }
        if (tmp == "back") {
            if (!q.empty())
                cout << q.back() << "\n";
            else
                cout << -1 << "\n";
        }
    }
}