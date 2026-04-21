// Link: https://atcoder.jp/contests/abc454/tasks/abc454_a

#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    int cnt = 0;
    for(int i = l; i <= r; i++) {
        if(i >= l && i <= r) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}