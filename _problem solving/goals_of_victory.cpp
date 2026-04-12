// Link: https://codeforces.com/problemset/problem/1877/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n - 1; i++) {
            cin >> arr[i];
        }

        int positiveNums = 0;
        int negativeNums = 0;
        for(int i = 0; i < n - 1; i++) {
            if(arr[i] >= 0) {
                positiveNums += arr[i];
            } else {
                negativeNums -= arr[i];
            }
        }

        cout << negativeNums - positiveNums << endl;
    }

    return 0;
}