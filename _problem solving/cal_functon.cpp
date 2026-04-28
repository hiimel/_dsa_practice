// Link: https://codeforces.com/problemset/problem/486/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, a , b) for(int i = a; i < b; i++)

void solve() {
    ll n;
    cin >> n;

    if(n % 2 == 0) {
        cout << n / 2 << "\n";
    } else {
        cout << - (n + 1) / 2 << "\n";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}