// Link: https://codeforces.com/problemset/problem/281/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if(s[0] == tolower(s[i])) {
            s[0] = toupper(s[0]);
        }
    }

    cout << s << endl;
}