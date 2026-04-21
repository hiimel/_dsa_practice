// Link: https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k, n, w;
    cin >> k >> n >> w;
    
    long long numOfBanana = w * (w + 1) / 2;
    long long costingBanana = numOfBanana * k;
    long long res = costingBanana - n;

    if(n >= costingBanana) {
        cout << 0 << endl;
    } else {
        cout << res << endl;
    }

    return 0;
}