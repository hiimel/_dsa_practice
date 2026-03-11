#include <bits/stdc++.h>
using namespace std;

void reverseArr(vector<int> &arr, int n) {
    int left = 0, right = n - 1;
    while(left < right) {
        swap(arr[left++], arr[right--]);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArr(arr, n);

    for(int i: arr) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}