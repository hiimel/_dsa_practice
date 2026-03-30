// Link: https://codeforces.com/problemset/problem/1901/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxGap = 0;
        int gap;

        gap = arr[0];

        if(maxGap < gap) {
            maxGap = gap;
        }

        for(int i = 0; i < n - 1; i++) {
            gap = arr[i + 1] - arr[i];
            if(gap > maxGap) {
                maxGap = gap;
            }
        }

        gap = 2 * (x - arr[n - 1]);
        if(maxGap < gap) {
            maxGap = gap;
        }

        cout << maxGap << endl;
    }

    return 0;
}