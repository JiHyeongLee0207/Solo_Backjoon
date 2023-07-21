#include<iostream>
#include<deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    deque<int> d;
    int n;
    cin >> n;
    while (n--) {
        string tmp;
        cin >> tmp;
        if (tmp == "push_front") {
            int x;
            cin >> x;
            d.push_front(x);
        }
        if (tmp == "push_back") {
            int x;
            cin >> x;
            d.push_back(x);
        }
        if (tmp == "pop_front") {
            if (!d.empty()) {
                cout << d.front() << "\n";
                d.pop_front();
            }
            else
                cout << -1 << "\n";
        }
        if (tmp == "pop_back") {
            if (!d.empty()) {
                cout << d.back() << "\n";
                d.pop_back();
            }
            else
                cout << -1 << "\n";
        }
        if (tmp == "size") {
            cout << d.size() << "\n";
        }
        if (tmp == "empty") {
            cout << d.empty() << "\n";
        }
        if (tmp == "front") {
            if (!d.empty())
                cout << d.front() << "\n";
            else
                cout << -1 << "\n";
        }
        if (tmp == "back") {
            if (!d.empty())
                cout << d.back() << "\n";
            else
                cout << -1 << "\n";
        }
    }
}