#include <bits/stdc++.h>
using namespace std;

int findFloor(int a[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int res = -1;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(a[mid] == x) {
            return a[mid];
        } else if(a[mid] > x) {
            high = mid - 1;
        } else {
            res = a[mid];
            low = mid + 1;
        }
    }

    return res;
}

int main() {
    int a[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Floor of 5:  " << findFloor(a, n, 5) << endl;
    cout << "Floor of 0:  " << findFloor(a, n, 0) << endl;
    cout << "Floor of 20: " << findFloor(a, n, 20) << endl;

    return 0;
}