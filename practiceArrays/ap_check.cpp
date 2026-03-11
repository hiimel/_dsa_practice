#include <bits/stdc++.h>
using namespace std;

bool checkAP(vector<int> &arr, int n) {
    if(n <= 2) {
        return true;
    }

    int common_diff = arr[1] - arr[0];
    for(int i = 2; i < n; i++) { 
        if((arr[i] - arr[i - 1]) != common_diff) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    if(checkAP(arr, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}