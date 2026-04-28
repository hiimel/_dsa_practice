#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)

void solve() {
    int n;
    cin >> n;

    int arr[n];
    rep(i, 0, n) {
        cin >> arr[i];
    }

    rep(i, 0, n) {
        if(arr[i] == 0) {
            cout << 0 << "\n";
            return;
        }
    }

    int min_val = INT_MAX;
    rep(i, 0, n) {
        min_val = min(min_val, abs(arr[i]));
    }

    cout << min_val << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}