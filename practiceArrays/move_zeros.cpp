#include <bits/stdc++.h>
using namespace std;

void moveZeros(vector<int> &arr, int n) {
    int zeros = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            continue;
        } else {
            swap(arr[i], arr[zeros]);
            zeros++;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZeros(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}