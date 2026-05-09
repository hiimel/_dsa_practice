// Link: https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.length();
    int cnt = 1;

    for(int i = 1; i < n; i++) {
        if(s[i] == s[i - 1]) {
            cnt++;
            if(cnt == 7) {
                cout << "YES" << "\n";
                return;
            }
        } else {
            cnt = 1;
        }
    }

    cout << "NO" << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
