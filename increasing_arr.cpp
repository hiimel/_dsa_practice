// Link: https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int countSwap = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }

        countSwap++;
    }

    cout << countSwap << endl;
    return 0;
}