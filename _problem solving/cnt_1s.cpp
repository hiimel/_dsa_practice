#include <bits/stdc++.h>
using namespace std;

int cntOnes(int a[], int n) {
    int low = 0;
    int high = n - 1;
    int res = n;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(a[mid] == 0) {
            res = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << cntOnes(a, n) << endl;

    return 0;
}