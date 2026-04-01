// Link: https://atcoder.jp/contests/abc451/tasks/abc451_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr1[101] = {0};
    int arr2[101] = {0};

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        arr1[a]++;
        arr2[b]++;
    }

    for(int i = 1; i <= m; i++) {
        int res = arr2[i] - arr1[i];
        cout << res << endl;
    }

    return 0;
} 