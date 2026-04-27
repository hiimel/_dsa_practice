// Link: https://codeforces.com/problemset/problem/467/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int cnt = 0;
    while(n--) {
        int p, q;
        cin >> p >> q;

        if(q - p >= 2) {
            cnt++;
        }
    }

    cout << cnt << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
    


