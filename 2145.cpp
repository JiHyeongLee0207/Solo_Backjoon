#include<iostream>
#include<string>
using namespace std;

int main() {
    do {
        string s;
        cin >> s;
        if (s == "0")
            break;

        int sum = stoi(s);
        while (s.size() != 1) {
            sum = 0;
            for (int i = 0; i < s.size(); i++)
                sum += s[i] - '0';
            s = to_string(sum);
        }
        cout << sum << "\n";
    } while (1);
}