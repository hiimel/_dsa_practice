#include <bits/stdc++.h>
using namespace std;

void thridLargestElement(vector<int> &arr, int n) {
    int max = INT_MIN;
    int secondMax = INT_MIN;
    int thirdMax = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            thirdMax = secondMax;
            secondMax = max;
            max = arr[i];
        } else if(arr[i] > secondMax)  {
            thirdMax = secondMax;
            secondMax = arr[i];
        } else if(arr[i] > thirdMax) {
            thirdMax = arr[i];
        }
    }

    cout << thirdMax << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    thridLargestElement(arr, n);

    return 0;
}