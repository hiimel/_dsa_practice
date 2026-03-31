// Link: https://codeforces.com/problemset/problem/1900/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cntTotalCells = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '.') {
                cntTotalCells++;
            }
        }

        bool isdot = false;
        for(int i = 0; i + 2 < n; i++) {
            if(s[i] ==  '.' && s[i + 1] == '.' && s[i + 2] == '.') {
                isdot = true;
                break;
            }
        }

        int res;
        if(isdot) {
            res = 2;
        } else {
            res = cntTotalCells;
        }

        cout << res << endl;
    }

    return 0;
}