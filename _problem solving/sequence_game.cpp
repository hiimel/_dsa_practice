//Link: https://codeforces.com/problemset/problem/1862/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> b(n);
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> a;
        a.push_back(b[0]);

        for(int i = 1; i < n; i++) {
            if(b[i - 1] > b[i]) {
                a.push_back(b[i]);
            }

            a.push_back(b[i]);
        }

        cout << a.size() << "\n";
        for(int i : a) {
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}