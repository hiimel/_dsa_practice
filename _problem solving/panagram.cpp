// Link: https://codeforces.com/problemset/problem/520/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;
    
    set<char> ch;
    for(int i = 0; i < n; i++) {
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
            ch.insert(tolower(s[i]));            
        }
    }

    if(ch.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}