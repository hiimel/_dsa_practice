#include <bits/stdc++.h>
using namespace std;

int slidingMaxSum(vector<int> &a, int n, int k) {
    int winSum = 0;
    for(int i = 0; i < k; i++) {
        winSum += a[i];
    } 

    int maxSum = winSum;
    int stIdx = 0;

    for(int i = k; i < n; i++) {
        winSum += a[i];
        winSum -= a[i - k];
        
        if(winSum > maxSum) {
            maxSum = winSum;
            stIdx = i - k + 1;
        }
    }

    cout << maxSum << endl;

    for(int i = stIdx; i < stIdx + k; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    return maxSum;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    slidingMaxSum(a, n, k);

    return 0;
}