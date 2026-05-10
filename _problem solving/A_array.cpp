// Link: https://atcoder.jp/contests/abc457/tasks/abc457_a

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, 0, n) {
        cin >> a[i];
    }

    int x;
    cin >> x;

    cout << a[x - 1] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}