#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)

void solve() {
    int n, x;
    cin >> n >> x;

    string s;
    cin >> s;
    
    rep(time, 0, x) {
        rep(i, 0, n - 1) {
            if(s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }

    cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}