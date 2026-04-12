// Link: https://codeforces.com/problemset/problem/1878/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool isfound = false;
        for(int i = 0; i < n; i++) {
            if(arr[i] == k) {
                isfound = true;
                break;
            }
        }

        if(isfound) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}