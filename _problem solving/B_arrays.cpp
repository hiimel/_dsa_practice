// Link: https://atcoder.jp/contests/abc457/tasks/abc457_b

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a[200001][1001];
    for(int i = 1; i <= n; i++) {
        int l;
        cin >> l;

        for(int j = 1; j <= l; j++) {
            cin >> a[i][j];
        }
    }    

    int x, y;
    cin >> x >> y;

    cout << a[x][y] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}