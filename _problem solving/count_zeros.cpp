#include <bits/stdc++.h>
using namespace std;

int cntZeros(int a[], int n) {
    int low = 0;
    int high = n - 1;
    int res = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == 0) {
            res = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return n - res;
}

int main() {
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << cntZeros(arr, n) << endl;

    return 0;
}