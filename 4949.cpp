#include<iostream>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    string s;
    while (1) {
        string output;
        getline(cin, s);
        if (s == ".")
            break;
        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] != '(' &&
                s[i] != ')' &&
                s[i] != '[' &&
                s[i] != ']')
                continue;
            output.push_back(s[i]);
        }
        
        len = output.size() / 2;
        while (len--) {
            while (output.find("()") != string::npos)
                output.erase(output.find("()"), 2);
            while (output.find("[]") != string::npos)
                output.erase(output.find("[]"), 2);
        }
        if (output.empty())
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}